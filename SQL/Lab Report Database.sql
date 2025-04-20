Create Database Daffodil;
use Daffodil;

CREATE TABLE student (
    student_id INT PRIMARY KEY,
    name VARCHAR(100),
    age INT,
    department VARCHAR(50),
    course_id INT
);

CREATE TABLE teacher (
    teacher_id INT PRIMARY KEY,
    name VARCHAR(100),
    subject VARCHAR(50),
    salary DECIMAL(10, 2)
);

CREATE TABLE course (
    course_id INT PRIMARY KEY,
    course_name VARCHAR(100),
    teacher_id INT,
    credits INT
);


INSERT INTO student VALUES 
(1, 'Faysal', 22, 'CSE', 101),
(2, 'Lisa', 21, 'BSS', 102),
(3, 'Liza', 21, 'CSE', 101),
(4, 'Mahamudul', 19, 'EEE', 103),
(5, 'Rafi', 20, 'CSE', 104),
(6, 'Nishat', 22, 'CSE', 101),
(7, 'Tania', 23, 'EEE', 103),
(8, 'Mehedi', 24, 'BBA', 105);

INSERT INTO teacher VALUES 
(1, 'Mr. Karim', 'Database', 60000),
(2, 'Ms. Nahar', 'Sociology', 55000),
(3, 'Mr. Jamil', 'Electronics', 58000),
(4, 'Ms. Ruma', 'Programming', 62000);

INSERT INTO course VALUES 
(101, 'Database Systems', 1, 3),
(102, 'Social Studies', 2, 2),
(103, 'Basic Electronics', 3, 4),
(104, 'OOP with Java', 4, 3),
(105, 'Business Law', 2, 2);

SELECT * FROM student;
-- Query:1
SELECT * FROM student WHERE department = 'CSE';

-- Query:2
SELECT * FROM student WHERE age > 21 AND department = 'CSE';

-- Query:3
SELECT * FROM teacher WHERE salary > 57000;

-- Query:4
SELECT * FROM student ORDER BY age DESC;

-- Query:5
SELECT department, COUNT(*) AS total_students 
FROM student 
GROUP BY department;

-- Query:6
SELECT AVG(salary) AS average_salary FROM teacher;

-- Query:7
SELECT * FROM course WHERE credits > 2;

-- Query:8
SELECT s.name AS student_name, c.course_name
FROM student s
JOIN course c ON s.course_id = c.course_id;

-- Query: 9
SELECT s.name AS student_name, c.course_name, t.name AS teacher_name
FROM student s
JOIN course c ON s.course_id = c.course_id
JOIN teacher t ON c.teacher_id = t.teacher_id;

-- Query: 10
SELECT * FROM student
WHERE age > (SELECT AVG(age) FROM student);

-- Query: 11
SELECT teacher_id, COUNT(*) AS courses_taught
FROM course
GROUP BY teacher_id
HAVING COUNT(*) > 1;

-- Query: 12
SELECT department
FROM student
GROUP BY department
ORDER BY COUNT(*) DESC
LIMIT 1;

-- Query: 13
SELECT s.name AS student, t.name AS teacher
FROM student s
JOIN course c ON s.course_id = c.course_id
JOIN teacher t ON c.teacher_id = t.teacher_id;

-- Query: 14
SELECT * FROM student WHERE department != 'CSE';

-- Query: 15
SELECT SUM(c.credits) AS total_credits
FROM student s
JOIN course c ON s.course_id = c.course_id
WHERE s.department = 'CSE';

-- Query: 16
SELECT SUM(c.credits) AS total_credits
FROM student s
JOIN course c ON s.course_id = c.course_id
WHERE s.department = 'CSE';

-- Query: 17
SELECT c.course_name
FROM course c
JOIN teacher t ON c.teacher_id = t.teacher_id
WHERE t.name = 'Ms. Nahar';

-- Query: 18
SELECT s.name AS student, c.course_name, t.name AS teacher
FROM student s
JOIN course c ON s.course_id = c.course_id
JOIN teacher t ON c.teacher_id = t.teacher_id
ORDER BY s.name ASC;

-- Query: 19
SELECT c.course_name, COUNT(s.student_id) AS total_students
FROM course c
LEFT JOIN student s ON c.course_id = s.course_id
GROUP BY c.course_name;

-- Query: 20
SELECT name, age,
    CASE 
        WHEN age < 20 THEN 'Teen'
        WHEN age BETWEEN 20 AND 22 THEN 'Young Adult'
        ELSE 'Adult'
    END AS age_group
FROM student;

