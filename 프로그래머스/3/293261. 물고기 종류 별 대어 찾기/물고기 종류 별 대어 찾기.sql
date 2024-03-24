-- 코드를 작성해주세요
select id, fish_name, length
from fish_info join fish_name_info using (fish_type)
where fish_type in (
    select fish_type 
    from fish_info
    group by fish_type
    having length = max(length)
)
order by id asc;