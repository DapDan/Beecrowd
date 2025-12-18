SELECT c.name,
       SUM(p.amount) AS total_amount
FROM categories c
JOIN products p ON p.id_categories = c.id
GROUP BY c.name
ORDER BY c.name;