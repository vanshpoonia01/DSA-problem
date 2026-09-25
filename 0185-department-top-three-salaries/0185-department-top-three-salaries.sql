# Write your MySQL query statement below
select  Department, Employee,Salary from
( select d.NAME as Department,e.name as Employee,e.salary as Salary,DENSE_RANK() OVER(
    PARTITION BY  d.NAME 
    ORDER BY e.salary  desc
) as rnk
from employee e join department d on e.departmentId=d.id  
)x
where rnk<=3;