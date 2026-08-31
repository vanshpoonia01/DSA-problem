# Write your MySQL query statement below
select contest_id,ROUND(count(user_id)/(select count(*)from users)*100,2) as percentage 
FROM Register 


group by contest_id
order by percentage desc,contest_id asc ;
