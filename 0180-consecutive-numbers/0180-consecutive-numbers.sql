# Write your MySQL query statement below
select distinct(num) as ConsecutiveNums from (select num,lag(num,1)over (order by id asc)as p1,
lag(num,2) over (order by id asc) as p2 from logs)x
where num=p1 and num=p2;