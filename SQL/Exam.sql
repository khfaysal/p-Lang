	Create database LabPerformanceTestA;
	use LabPerformanceTestA;

	Create table EmployeeDetailsE (
		EmployeeID INT PRIMARY KEY,
		FirstName VARCHAR(20),
		LastName VARCHAR(20),
		DateOfBirth DATE,
		Gender VARCHAR(6),
		DepartmentID INT,
		HireDate DATE,
		Salary INT
	);

	Insert Into EmployeeDetailsE VALUES 
	(566, 'Kamrul', 'Hasan', '1987-11-07', 'M', 501, '2008-10-20', 75000),
	(567, 'Ava', 'Ward', '1992-04-17', 'F', 502, '2013-06-30', 67000),
	(568, 'Jacob', 'Jenkins', '1991-02-11', 'M', 503, '2015-01-3', 59000),
	(569, 'Harper', 'Bryant', '1997-12-1', 'F', 504, '2022-03-21', 51000),
	(570, 'Noah', 'Perry', '1983-08-13', 'M', 505, '2006-09-25', 81000);

	Select * from EmployeeDetailsE 
	Where Salary = ( Select Max(Salary) From EmployeeDetailsE);


	Select FirstName, LastName From EmployeeDetailsE
	Where LastName LIKE '%o%';

	Select DepartmentID, COUNT(*) AS EmployeeCount
	From EmployeeDetailsE
	GROUP BY DepartmentID;

	Select * FROM EmployeeDetailsE
	WHERE Salary > 65000;

	SELECT * FROM EmployeeDetailsE
	ORDER BY DateOfBirth ASC
	LIMIT 1;

	SELECT DepartmentID FROM EmployeeDetailsE
	WHERE Gender = 'F'
	GROUP BY DepartmentID
	HAVING COUNT(*) > 1;

	SELECT DepartmentID
	FROM EmployeeDetailsE
	GROUP BY DepartmentID
	HAVING MAX(Salary) > 80000;

	SELECT SUM(Salary) AS TotalSalaryExpense
	FROM EmployeeDetailsE;
