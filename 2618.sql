select prod.name, prov.name, c.name 
from products prod
join providers prov on prov.id = prod.id_providers 
join categories c on c.id = prod.id_categories
where prov.name = 'Sansul SA' and c.name = 'Imported'