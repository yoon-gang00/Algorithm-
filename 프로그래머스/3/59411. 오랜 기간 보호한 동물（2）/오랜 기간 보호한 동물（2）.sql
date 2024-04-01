-- 코드를 입력하세요
SELECT A.ANIMAL_ID, A.NAME
FROM ANIMAL_INS A JOIN ANIMAL_OUTS B USING(ANIMAL_ID)
ORDER BY TIMESTAMPDIFF(MINUTE, A.DATETIME, B.DATETIME) DESC
LIMIT 2;