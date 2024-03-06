-- 코드를 작성해주세요
select a.dept_id, dept_name_en, round(avg(sal),0) as avg_sal
from hr_department a join hr_employees b on a.dept_id = b.dept_id
group by dept_id
order by avg_sal desc;