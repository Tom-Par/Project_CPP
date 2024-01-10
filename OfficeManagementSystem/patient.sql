USE [users]
GO

/****** Object:  Table [dbo].[patient]    Script Date: 10.01.2024 12:18:12 ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[patient](
	[ID_P] [int] IDENTITY(1,1) NOT NULL,
	[name] [varchar](50) NOT NULL,
	[age] [int] NOT NULL,
	[gender] [varchar](50) NOT NULL,
	[phone] [varchar](15) NOT NULL,
	[email] [varchar](50) NOT NULL,
PRIMARY KEY CLUSTERED 
(
	[ID_P] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY]
GO

