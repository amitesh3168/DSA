# Write your MySQL query statement below
select UN.unique_id, e.name 
from Employees  e 
Left join EmployeeUNI  UN
on e.id=UN.id 
