Create database DIU;
use DIU;
create table pay ( cid int, customer varchar(20), mode varchar (20), city varchar(20));
insert into pay( cid, customer, mode, city) values
(101, "Olivia", "Net", "Portland"),
(102, "Ethan", "Credit", "Miami"),
(103, "Maya", "Credit", "Seattle"),
(104, "Liam", "Net", "Denver"),
(105, "Sophia", "Credit", "New Orleans"),
(106, "Caleb", "Debit", "Minneapolis"),
(107, "Ava", "Debit", "Phonex"),
(108, "Lucas", "Net", "Boston"),
(109, "Issabella", "Net", "Nashvile"),
(110, "Jackson", "Credit", "Boston");

select * from pay;

use diu;

select * from pay;
select cid from pay where city = "Boston";
select cid from pay where mode = "Net";

select mode from pay group by mode;
select count(mode) from pay group by mode;

--                  [ those two lines below are holding the same value.]
select mode, count(mode) from pay group by mode;  
select mode, count(customer) from pay group by mode;

------------------------------------------------
create table s4(id int, name varchar(20), marks int, grade varchar(6), city varchar(20));
insert into s4(id,name, marks, grade, city) values
(1, "anil", 78, "C", "Pune"),
(2, "bhumika", 93, "A", "Mumbai"),
(3, "chetan", 85, "B", "Mumbai"),
(4, "dhruv", 96, "A", "Delhi"),
(5, "emanuel", 12, "F", "Delhi"),
(6, "farah", 82, "B", "Delhi");
insert into s4(id,name, marks, grade, city) values
(2, "bhumika", 93, "A", "Mumbai"),
(4, "dhruv", 96, "A", "Delhi");

select distinct city from s4;
select * from s4;
select city, count(id) from s4 group by city;
select grade, count(id) from s4 group by grade order by grade asc;

select city, count(id) from s4 group by city having max(marks) > 90;

use DIU;

select city from s4 where grade = "A" group by city order by city asc;

SET SQL_SAFE_UPDATES = 0;
update s4 set grade = "Wow" where grade = "A";

select grade, count(id) from s4 group by grade order by grade;
update s4 set grade = "A" where grade = "Wow";
update s4 set marks = 82 where marks = 12;
select * from s4;
update s4 set marks = marks + 1;
update s4 set marks = marks - 2;
update s4 set marks = marks - 1;

delete from s4 where marks > 92;
select * from s4;

