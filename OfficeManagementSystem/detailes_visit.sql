USE [users]
GO

/****** Object:  Table [dbo].[detailed_visit]    Script Date: 1/24/2024 3:17:50 PM ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[detailed_visit](
	[ID_D] [int] IDENTITY(1,1) NOT NULL,
	[visit_id] [int] NOT NULL,
	[treatment] [varchar](50) NOT NULL,
	[description] [varchar](max) NULL,
	[prescription] [varchar](255) NULL,
PRIMARY KEY CLUSTERED 
(
	[ID_D] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO

