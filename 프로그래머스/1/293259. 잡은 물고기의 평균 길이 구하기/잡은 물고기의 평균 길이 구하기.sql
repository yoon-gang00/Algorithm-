-- 코드를 작성해주세요
SELECT round(avg(coalesce(length,10)),2) as AVERAGE_LENGTH
FROM FISH_INFO 
