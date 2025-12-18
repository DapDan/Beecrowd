select prod.name, prov.name, prod.price
from products prod
join providers prov on prov.id = prod.id_providers 
join categories c on c.id = prod.id_categories  
where prod.price > 1000 and c.name = 'Super Luxury'