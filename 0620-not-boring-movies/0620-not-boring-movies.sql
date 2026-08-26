# Write your MySQL query statement below
SELECT * FROM CINEMA WHERE ID%2!=0 && DESCRIPTION !='boring' order by rating desc;