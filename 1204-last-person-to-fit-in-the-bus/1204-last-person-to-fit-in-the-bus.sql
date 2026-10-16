# Write your MySQL query statement below
select person_name from (select person_name ,sum(weight) over(
    order by turn asc
)as total from queue)x
where total<=1000
order by total desc
limit 1;