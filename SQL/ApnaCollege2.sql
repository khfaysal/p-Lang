Create Database xyz;
Use xyz;
Create Table employee(
Id Int, 
Name Varchar(20), 
Salary Int,
Primary Key(Id)
);
Insert Into employee(Id, Name, Salary)
Values
(1, "A", 2000),
(2, "Aa", 2000),
(3, "Aaa", 2011);

Select * From employee;


--         [UNIQUE]

Create Table Boom(id Int Unique);


Insert Into boom Values(101);
Insert Into boom Values(102);
Insert Into boom Values(102);
