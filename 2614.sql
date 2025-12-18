select c.name, r.rentals_date from customers c
join rentals r on r.id_customers = c.id
WHERE rentals_date >= '2016-09-01' AND rentals_date <  '2016-10-01'
