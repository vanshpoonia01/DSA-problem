# Write your MySQL query statement below
select e.name from employee e join employee a on e.id = a.managerID
GROUP BY e.id, e.name
having count(a.id)>=5;