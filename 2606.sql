select p.id, p.name from products p
join categories c on c.id = p.id_categories
where c.name like 'super%'