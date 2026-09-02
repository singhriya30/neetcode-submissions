-- Write your query below
-- SELECT employee_id, (salary*100/10) as bonus from employees where employee_id % 2!=0 AND name NOT LIKE 'M%' 


SELECT employee_id, CASE WHEN employee_id%2!=0 AND name NOT LIKE 'M%' THEN SALARY ELSE 0 END AS bonus FROM employees ORDER BY employee_id