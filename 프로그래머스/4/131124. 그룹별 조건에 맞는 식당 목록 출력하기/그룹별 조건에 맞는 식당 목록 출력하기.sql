-- 코드를 입력하세요
SELECT MEMBER_NAME, REVIEW_TEXT, date_format(REVIEW_DATE,"%Y-%m-%d") as REVIEW_DATE
FROM MEMBER_PROFILE JOIN REST_REVIEW USING (MEMBER_ID)
WHERE MEMBER_ID = (select member_id from rest_review group by member_id order by count(*) desc limit 1)
ORDER BY 3,2