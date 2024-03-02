select a.author_id, a.author_name, b.category, sum(c.sales*b.price) as total_sales
from author a
join book b on a.author_id = b.author_id
join book_sales c on b.book_id = c.book_id
where year(c.sales_date) = 2022 and month(c.sales_date) = 1
group by author_id, category
order by author_id, category desc