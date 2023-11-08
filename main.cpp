#include <iostream>
#include <fstream>
#include <vector>

// Struktura reprezentująca pacjentów
struct Patient {
    std::string name;
    int age;
    std::string diagnosis;
};

// Struktura reprezentująca personel szpitala
struct Staff {
    std::string name;
    std::string position;
    std::string department;
};

// Funkcja do dodawania pacjentów
void addPatient(std::vector<Patient>& patients) {
    Patient patient;
    std::cout << "\nPodaj imie pacjenta: ";
    std::cin >> patient.name;
    std::cout << "Podaj wiek pacjenta: ";
    std::cin >> patient.age;
    std::cout << "Podaj diagnoze pacjenta: ";
    std::cin >> patient.diagnosis;
    patients.push_back(patient);
    std::cout << "Pacjent dodany!" << std::endl;
}

// Funkcja do dodawania personelu szpitala
void addStaffMember(std::vector<Staff>& staff) {
    Staff staffMember;
    std::cout << "\nPodaj imie pracownika: ";
    std::cin >> staffMember.name;
    std::cout << "Podaj stanowisko pracownika: ";
    std::cin >> staffMember.position;
    std::cout << "Podaj dzial szpitala: ";
    std::cin >> staffMember.department;
    staff.push_back(staffMember);
    std::cout << "Pracownik dodany!" << std::endl;
}

// Funkcja do zapisywania danych do pliku .dat
void saveData(const std::vector<Patient>& patients, const std::vector<Staff>& staff) {
    std::ofstream file("hospital_data.dat", std::ios::binary);
    if (file.is_open()) {
        for (const Patient& patient : patients) {
            file.write(reinterpret_cast<const char*>(&patient), sizeof(Patient));
        }
        for (const Staff& staffMember : staff) {
            file.write(reinterpret_cast<const char*>(&staffMember), sizeof(Staff));
        }
        std::cout << "\nDane zapisane w pliku hospital_data.dat" << std::endl;
        file.close();
    } else {
        std::cerr << "Nie mozna otworzyc pliku do zapisu." << std::endl;
    }
}

// Funkcja do odczytu danych z pliku .dat
void loadData(std::vector<Patient>& patients, std::vector<Staff>& staff) {
    std::ifstream file("hospital_data.dat", std::ios::binary);
    if (file.is_open()) {
        patients.clear();
        staff.clear();

        while (true) {
            Patient patient;
            file.read(reinterpret_cast<char*>(&patient), sizeof(Patient));
            if (file.eof()) {
                break;
            }
            patients.push_back(patient);
        }

        while (true) {
            Staff staffMember;
            file.read(reinterpret_cast<char*>(&staffMember), sizeof(Staff));
            if (file.eof()) {
                break;
            }
            staff.push_back(staffMember);
        }

        std::cout << "Dane wczytane z pliku hospital_data.dat" << std::endl;
        file.close();
    } else {
        std::cerr << "Nie mozna otworzyc pliku do odczytu." << std::endl;
    }
}

// Funkcja do wyświetlania pacjentów
void displayPatients(const std::vector<Patient>& patients) {
    std::cout << "\nLista pacjentow:" << std::endl;
    for (const Patient& patient : patients) {
        std::cout << "Imię: " << patient.name << "\nWiek: " << patient.age << "\nDiagnoza: " << patient.diagnosis << std::endl;
    }
}

int main() {
    std::vector<Patient> patients;
    std::vector<Staff> staff;

    // Odczytaj dane z pliku przy uruchomieniu programu
    loadData(patients, staff);

    while (true) {
        std::cout << "\nMenu:" << std::endl;
        std::cout << "\n1. Dodaj pacjenta" << std::endl;
        std::cout << "2. Dodaj pracownika" << std::endl;
        std::cout << "3. Wyswietl pacjentow" << std::endl;
        std::cout << "4. Zapisz dane" << std::endl;
        std::cout << "5. Wyjdz" << std::endl;

        int choice;
        std::cout << "\nWybierz opcje: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addPatient(patients);
                break;
            case 2:
                addStaffMember(staff);
                break;
            case 3:
                displayPatients(patients);
                break;
            case 4:
                saveData(patients, staff);
                break;
            case 5:
                return 0;
            default:
                std::cout << "\nNieprawidlowy wybor. Wybierz ponownie." << std::endl;
        }
    }

    return 0;
}
