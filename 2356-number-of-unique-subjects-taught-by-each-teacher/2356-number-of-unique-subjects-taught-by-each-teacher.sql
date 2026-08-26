# Write your MySQL query statement below
select teacher_id,  COUNT( DISTINCT SUBJECT_ID) AS CNT  from teacher GROUP BY TEACHER_ID ;