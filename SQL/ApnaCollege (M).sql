use diu;
create table dept ( id int primary key, name varchar (50));

-- Cascading:

create table teacher ( 
id int primary key, 
name varchar(50), 
dept_id int, 
foreign key (dept_id) references dept(id)
on update cascade
on delete cascade);

insert into dept( id, name) values
( 1, "English"),
(2, "IT");
select * from dept;

insert into teacher values
(101, "Adam", 1),
(102, "Eve", 2);
select * from teacher;

update dept set id = 3 where id = 2;

-- Alter:
alter table s4 add column age int;
select * from s4;

alter table s4 change column id student_id int;
select * from s4;

alter table s4 modify age varchar(10);
alter table s4 rename to s1;
select * from s1;
alter table s1 rename to s4;
select * from s4;
use diu;

insert into s4(student_id,name, marks, grade, city) values
(7, "bh", 20, "F", "Mumbai"),
(8, "bhai", 23, "F", "Mumbai");

SET SQL_SAFE_UPDATES = 0;

select * from s4;
delete from s4 where marks < 30;





