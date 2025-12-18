SELECT c.name, o.id
FROM customers c
JOIN orders o ON o.id_customers = c.id
WHERE o.orders_date between '2016-01-01' AND '2016-06-30'
ORDER BY o.id;