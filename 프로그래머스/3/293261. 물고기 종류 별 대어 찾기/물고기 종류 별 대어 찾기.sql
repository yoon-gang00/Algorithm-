select id, fish_name, length
from fish_info join fish_name_info using(fish_type)
where (fish_type,length) in (select fish_type, max(length) as length 
                             from fish_info 
                             group by fish_type )
order by id;