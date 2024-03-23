-- 코드를 입력하세요
SELECT rest_id, rest_name, food_type, favorites, address, round(avg(review_score),2) as score
from rest_info join rest_review using (rest_id)
where address like '서울%'
group by 1
order by score desc, favorites desc;