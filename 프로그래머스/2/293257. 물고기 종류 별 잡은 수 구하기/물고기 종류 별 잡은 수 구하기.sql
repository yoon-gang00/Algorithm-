-- 코드를 작성해주세요
select count(time) as fish_count, fish_name
from fish_info
join fish_name_info
using(fish_type)
group by fish_name
order by fish_count desc