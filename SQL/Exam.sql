-- 1
Create Database Final_Avenger_B;
use Final_Avenger_B;

Create Table Avenger_B ( 
AvengerID int primary key, 
Name varchar(50), 
Age int, 
Team varchar(50), 
PowerLevel int
);

Create Table Missions_B ( 
MissionID int primary key, 
MissionName varchar (50),
Enemy varchar(50), 
Priority varchar(20), 
AvengerID int,
Foreign Key (AvengerID) References Avenger_B (AvengerID)
);


-- 2
Insert into Avenger_B values
(201, 'Spider-Man', 25, 'Web Warriors', 82),
(202, 'Doctor Strange', 42, 'Mystic Arts', 91),
(203, 'Scarlet Witch', 33, 'Mystic Arts', 95),
(204, 'Falcon', 38, 'Air Patrol', 80),
(205, 'Ant-Man', 36, 'Quantum Team', 78);

Insert into Missions_B values
(401, 'Mirror Dimension', 'Dormammu', 'High', 202),
(402, 'Quantum Heist', 'Kang the Conqueror', 'Medium', 205),
(404, 'Sky Surveillance', 'Vulture', 'Medium', 204),
(405, 'Web Strike', 'Green Goblin', 'High', 201),
(406, 'Reality Collapse', 'Thanos', 'High', 203);


-- 3
select MissionName
From Missions_B
Where Enemy = 'Kang the Conqueror';

-- 4
Select Name 
From Avenger_B 
Order by PowerLevel Desc
limit 1;


-- 5
Select A.Name 
From Avenger_B A 
Join Missions_B M on A.AvengerID = M.AvengerID
Where M.Enemy = 'Thanos';
  
  
-- 6
Select M.MissionName, A.Name 
From Missions_B M
Join Avenger_B A on M.AvengerID = A.AvengerID
Where M.Priority = 'Medium';
  
  
-- 7
Select Name, PowerLevel, Age 
From Avenger_B
Where age>= 50;    
    
 
 -- 8
 Select Priority, Count(*) AS NumberOfMissions
 From Missions_B
 Group By Priority
 Order By NumberOfMissions Desc;
  
  
-- 9
Select Name From Avenger_B
Where AvengerID NOT IN (Select AvengerID From Missions_B);
    
    
-- 10
Select A.Name, Count (M.MissionID) As NumberOfMissions
From Avenger_B A 
Left Join Missions_B M ON A.AvengerID = M.AvengerID
Group By A.Name;
    
    
    
    
    
    