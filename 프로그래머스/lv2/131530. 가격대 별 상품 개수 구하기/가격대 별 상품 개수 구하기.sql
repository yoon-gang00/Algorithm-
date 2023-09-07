-- 코드를 입력하세요
SELECT
    FLOOR(PRICE/10000)*10000 AS PRICE_GROUP,
    COUNT(*) AS PRODUCTS
FROM
   PRODUCT -- 여기에 상품 테이블 이름을 넣어주세요
GROUP BY
    PRICE_GROUP
ORDER BY
    PRICE_GROUP;