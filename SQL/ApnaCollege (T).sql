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

