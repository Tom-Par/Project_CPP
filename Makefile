#Makefile for cpp project - Hospital management system
CC = g++

# CFLAGS will be the options passed to the compiler
CFLAGS = -c -Wall

all: hospital

hospital: main.o
	$(CC) main.o -o hospital

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean: 
	rm -rf *.o

