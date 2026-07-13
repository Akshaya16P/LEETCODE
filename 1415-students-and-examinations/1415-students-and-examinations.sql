# Write your MySQL query statement below
SELECT s.student_id,s.student_name,a.subject_name,COUNT(E.student_id) AS attended_exams
FROM Students s
JOIN Subjects a
LEFT JOIN Examinations E 
ON s.student_id = E.student_id 
AND a.subject_name = E.subject_name
GROUP BY s.student_id, s.student_name, a.subject_name
ORDER BY s.student_id;
