create database college;

use college;
--                          [Create Table]
create table Student (id int primary key, name varchar(50), age int not null);

insert into Student values(1, "Faysal", 22);
insert into Student values(2, "Saim", 22);
insert into Student values(3, "Fardin", 22);

Select * from Student;
show databases;
show tables;

--
Create Database if not exists college; 
-- 
drop database ApnaCollege;
drop database if exists ApnaCollege;
-- 
Create Table students(
roll_no Int Primary Key, 
name Varchar(20)
);

Select * From student;
-- 
insert into Student values
(1, "Faysal", 22);

-- 
Insert Into student Values 
(4, "Nadim", 22),
(5, "Maruf", 22),
(6, "Pra", 22),
(7, "Ovi", 22),
(8, "Akash", 22),
(9, "Arian", 22);

select * From student;
Insert Into student Values(7, "Ismam", 22);

