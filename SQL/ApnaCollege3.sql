Create Database ApC;
Use ApC;
Create Table Info(
Roll Int Primary Key,
Name Varchar(20),
Marks Int,
Grade Char(2),
Address Varchar(20)
);

Insert Into Info (Roll, Name, Marks, Grade, Address) Values
(01, "Hasan", 44, "E", "Dhaka"),
(02, "Faysal", 84, "A+", "Panchagarh"),
(03, "Jahan", 76, "A-", "Rangpur"),
(04, "Zulfiqure", 88, "A+", "Dhaka"),
(05, "Lisa", 70, "A", "Sylhet");

Select * From Info;
--                             [Specifically Retrieve Data]
Select Name, Grade From Info;    
Select Address From info;
Select Distinct Address From Info;    -- [Show Data without repetation]
Select Distinct Grade From Info;

--                                [Where Clause] **

Select * From Info Where Marks > 75;
Select * From Info Where Address = "Dhaka";
Select * From Info Where Marks > 80 and Address = "Dhaka";
Select * From Info Where Marks > 80 or Address ="Dhaka";
Select * From Info Where Marks+18 > 100;
Select * From Info Where Address IN ("Dhaka", "Rangpur");
Select * From Info Where Address Not In ("Dhaka", "Rangpur");
Select * From Info Where Name = "Jahan";

--                                [Limit Clause]
 
Use ApC;
Select * From Info Where Marks > 75
Limit 2;

--                                [Order By Clause]

Select Marks From Info;
Select * From Info order by Marks Asc;
Select * From Info order by Marks Desc;
Select * From Info order by Grade Asc;
Select * From Info order by Address Asc;
Select * From Info order by Marks Asc Limit 3;



--                                [Aggregate Function] 

Select max(Marks) From Info;
Select min(marks) From Info;
Select Count(Marks) From Info;
Select avg(Marks) From Info;


--                                [Group By Clause]

Select Address, Count(Roll) From Info Group By Address;


--        [Ques::        Write the query to find avg marks in each city in ascending order.]

Create Table Student (
roll int Primary Key,
name varchar(20),
marks int,
grade varchar(2),
city varchar(10)
);

Insert Into Student (roll, name, marks, grade, city) Values
(01, "Kamrul", 44, "E", "Dhaka"),
(02, "Faysal", 84, "A+", "Panchagarh"),
(03, "Jahan", 76, "A-", "Rangpur"),
(04, "Zulfiqure", 88, "A+", "Dhaka"),
(06, "Lisa", 70, "A", "Sylhet"),
(07, "Ismat", 60, "B", "Rangpur"),
(08, "Jahan", 70, "A-", "Sylhet"),
(09, "Farjana", 80, "A+", "Sylhet"),
(10, "Suchi", 76, "A", "Dhaka");

Select * From Student;
Select city From Student group by city;
Select city, max(marks) From Student group by city;
Select city, min(marks) From Student group by city;


--   [Solve::--------------->

Select city, avg(marks) From Student group by city order by city;
Select city, avg(marks) From Student group by city order by avg(marks);
Select city, avg(marks) From Student group by city order by avg(marks)asc;
Select city, avg(marks) From Student group by city order by avg(marks)desc;



--    [Ques::        For given table, find the total payment according to each payment method.]

Create Table Payment(
cus_id int Primary Key,
cus_name varchar(20),
mode varchar(20),
city varchar(20)
);



--   [Solve::--------------->

Insert Into Payment(cus_id, cus_name, mode, city) Values
(101, "Olivia Barrett", "Netbanking", "Portland"),
(102, "Ethan Sinclair", "Credit Card", "Miami"),
(103, "Maya Hernandez", "Credit Card", "Seattle"),
(104, "Liam Donovan", "Netbanking", "Denver"),
(105, "Sophia Nguyen", "Credit Card", "New Orleans"),
(106, "Caleb Foster", "Debit Card", "Minneapolis"),
(107, "Ava Patel", "Debit Card", "Phoenix"),
(108, "Lucas Cater", "Netbanking", "Boston"),
(109, "Isabella Martinez", "Netbanking", "Nashville"),
(110, "Jackson Brooks", "Credit Card", "Boston");


Select * From Payment;
Select mode, count(cus_name) From Payment group by mode;



--                                [Having Clause]


-- 				    	[(01, "Kamrul", 44, "E", "Dhaka")]

Select city From Student group by city;
Select city, count(roll) From Student group by city;

Select city, count(roll) From Student group by city Having max(marks) > 80;
Select city, count(roll) From Student group by city Having min(marks) < 60;



--                         [General Order]
/*
SELECT column(s) 
FROM table_name 
WHERE condition 
GROUP BY column(s)
HAVING condition 
ORDER BY column(s)
ASC;
*/



--                                         [Update]  
-- [off safe mode using this code]
SET SQL_SAFE_UPDATES = 0;

(roll, name, marks, grade, city)
-- (01, "Kamrul", 44, "E", "Dhaka"),


Select marks From Student Where marks < 50;
Select city From Student Where marks < 50 Group By city;


Update Student Set grade = "gd" Where grade = "A+";
Update Student Set marks = marks + 2;
Select * From Student;



--                                         [Delete]  


Insert Into Student Values (11, "Rohan", 28, "F", "Pabna");
Insert Into Student Values (12, "Hasib", 24, "F", "Pabna");
Delete From Student Where marks < 30;









