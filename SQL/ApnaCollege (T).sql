use diu;

-- Sub Query:


CREATE TABLE s5 (
    id INT,
    name VARCHAR(50),
    class VARCHAR(10)
);

CREATE TABLE results (
    student_id INT,
    marks INT,
    grade CHAR(1)
);

INSERT INTO s5 (id, name, class) VALUES
(1, 'Alice', '10'),
(2, 'Bob', '10'),
(3, 'Charlie', '9'),
(4, 'David', '9'),
(5, 'Eva', '10');

INSERT INTO results (student_id, marks, grade) VALUES
(1, 85, 'A'),
(2, 90, 'A'),
(3, 78, 'B'),
(4, 88, 'A'),
(5, 70, 'C');

SELECT name FROM s5
WHERE id = (SELECT student_id FROM results WHERE marks = (SELECT MAX(marks) FROM results));

SELECT name FROM s5
WHERE id IN (SELECT student_id FROM results WHERE grade = 'A');


-- Joint 's

use diu;

create database pro;
use pro;

create table student ( student_ID int, Name varchar(20));
create table course (student_ID int, Course varchar(20));

insert into student values
(101, 'Adam'),
(102, 'Bob'),
(103, 'Casey');

insert into course values
(102, 'English'),
(105, 'Math'),
(103, 'Science'),
(107, 'Science');

truncate table course;
insert into course values
(102, 'English'),
(105, 'Math'),
(103, 'Science'),
(107, 'SWE');

select * from course;


-- inner join: (common things comes up here)

select * from student 
inner join course
ON student.student_ID = course.student_ID;

select * from student as s
inner join course as c
ON s.student_ID = c.student_ID;

-- Left & Right & Full Join:

Select * from student
left join course
on student.student_ID = course.student_ID;

Select * from student
right join course
on student.student_ID = course.student_ID;


-- [Left + Right Join = Full Join:]

Select * From student
left join course
on student.student_ID = course.student_ID
UNION
Select * From student
right join course
on student.student_ID = course.student_ID;

-- Left Exclusive Join(only part A without common value):
Select * From student
left join course
on student.student_ID = course.student_ID
WHERE course.student_ID IS NULL;

-- Right Exclusive Join(only part B without common value):
Select * From student
right join course
on student.student_ID = course.student_ID
WHERE student.student_ID IS NULL;

-- OUTER JOIN: (UNION of exclusive right and left join):
select * from student
left join course
on student.student_ID = course.student_ID
where course.student_ID is null
UNION
select * from student
right join course
on student.student_ID = course.student_ID
where student.student_ID is null;

-- SELF JOIN:

create table sTable ( id int, name varchar(20), manager_id int);
insert into sTable values
(101, 'adam', 103),
(102, 'bob', 104),
(103, 'casey', null),
(104, 'donald', 103);

select * from sTable as a 
Join sTable as b
on a.id = b.manager_id;
-- [always executed right to left]

select b.name, a.name as manager_name
from sTable as a 
Join sTable as b
on a.id = b.manager_id;


-- UNION
select name from sTable
UNION
select name from sTable;


select name from sTable
UNION ALL
select name from sTable;


-- SUB QUARY:

CREATE TABLE students (
    rollno INT,
    name VARCHAR(100),
    marks INT
);

CREATE TABLE students1
(rollno int, 
name varchar(20), 
marks int, 
grade varchar(10), 
city varchar(20)
);



INSERT INTO students (rollno, name, marks) VALUES
(101, 'anil', 78),
(102, 'bhumika', 93),
(103, 'chetan', 85),
(104, 'dhruv', 96),
(105, 'emanuel', 92),
(106, 'farah', 82);

INSERT INTO students1 VALUES
(101, 'anil', 78, 'C', 'Pune'),
(102, 'bhumika', 93, 'A', 'Mumbai'),
(103, 'chetan', 85, 'B', 'Mumbai'),
(104, 'dhruv', 96, 'A', 'Delhi'),
(105, 'emanuel', 92, 'F', 'Delhi'),
(106, 'farah', 82, 'B', 'Delhi');


select avg(marks) from students;

select name from students 
where marks > ( select avg(marks) from students);



select rollno from students
where rollno % 2 = 0;

select name, marks from students
where rollno IN (select rollno from students where rollno % 2 = 0);


select * from students1 
where city = 'Delhi';

select max(marks) 
from(select * from students1  where city = 'Delhi') as temp;

Select(Select max(marks) from students1), name from students1;

Select name, (Select max(marks) from students1) from students1;



-- VIEW: [it's not a actual table, but virtual table.]

Create view view1 as
select rollno, name, marks from students1;
select * from view1;
select * from view1 where marks > 80;
