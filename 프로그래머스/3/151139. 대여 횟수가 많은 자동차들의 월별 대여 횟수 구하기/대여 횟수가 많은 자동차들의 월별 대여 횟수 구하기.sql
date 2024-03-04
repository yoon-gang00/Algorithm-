-- 코드를 입력하세요
SELECT month(start_date) as month, car_id, count(*) as records
from car_rental_company_rental_history
where date_format(start_date,'%Y-%m') between '2022-08' and '2022-10'
    and car_id in (select car_id from car_rental_company_rental_history where date_format(start_date,'%Y-%m') between '2022-08'and '2022-10' group by car_id having count(car_id)>=5)
group by car_id, month(start_date)
having records >= 1
order by month, car_id desc;