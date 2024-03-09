-- 코드를 입력하세요
SELECT a.car_id, a.car_type, round(a.daily_fee*30*(100-c.discount_rate)/100) as fee
from car_rental_company_car a join car_rental_company_rental_history b 
on a.car_id = b.car_id
join car_rental_company_discount_plan c 
on a.car_type = c.car_type
where a.car_id not in (
    select car_id
    from car_rental_company_rental_history
    where end_date > '2022-11-01' and start_date < '2022-12-01'
) and c.duration_type = '30일 이상'
group by a.car_id
having a.car_type in ('세단','SUV') and (fee >= 500000 and fee<2000000)
order by fee desc, car_type, car_id desc