-- 코드를 입력하세요
SELECT date_format(sales_date,"%Y-%m-%d") sales_date, product_id, user_id, sales_amount
from online_sale 
where year(sales_date)=2022 and month(sales_date)=03
union 
select date_format(sales_date,"%Y-%m-%d") sales_date, product_id,null 'user_name', sales_amount
from offline_sale 
where year(sales_date)=2022 and month(sales_date)=03
order by sales_date asc, product_id asc, user_id asc;