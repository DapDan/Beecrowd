SELECT prod.name, prov.name
FROM products prod
JOIN providers prov ON prov.id = prod.id_providers
WHERE prov.name = 'Ajax SA';