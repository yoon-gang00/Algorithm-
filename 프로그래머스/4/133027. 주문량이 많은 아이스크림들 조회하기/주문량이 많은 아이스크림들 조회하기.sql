-- 코드를 입력하세요
SELECT flavor
from first_half join july
using(flavor)
group by flavor
order by sum(first_half.total_order)+sum(july.total_order) desc
limit 3;
