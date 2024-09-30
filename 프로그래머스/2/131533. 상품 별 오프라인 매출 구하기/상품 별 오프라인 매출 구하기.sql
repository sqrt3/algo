SELECT product_code as 'PRODUCT_CODE', sum(os.sales_amount * p.price) as SALES
FROM product as p
JOIN offline_sale as os ON p.product_id = os.product_id
GROUP BY product_code
ORDER BY SALES DESC, p.product_code;