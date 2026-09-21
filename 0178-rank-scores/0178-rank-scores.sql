# Write your MySQL query statement below
select score,`rank` from (select score, Dense_rank() over (order by score desc )as `rank` from Scores)x;