-- 코드를 작성해주세요
SELECT ID,
CASE WHEN rank_size <= ((SELECT COUNT(*) FROM ECOLI_DATA)*0.25) THEN 'CRITICAL'
WHEN rank_size <= ((SELECT COUNT(*) FROM ECOLI_DATA)*0.5) THEN 'HIGH'
WHEN rank_size <= ((SELECT COUNT(*) FROM ECOLI_DATA)*0.75) THEN 'MEDIUM'
ELSE 'LOW'
END 
AS COLONY_NAME
FROM (
    SELECT ID, RANK() OVER (ORDER BY SIZE_OF_COLONY DESC) AS rank_size
    FROM ECOLI_DATA
    ) AS aa
ORDER BY 1;