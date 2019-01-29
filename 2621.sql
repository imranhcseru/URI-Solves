select products.name
from providers,products
where (providers.id=products.id_providers)
and (products.amount>=10 and 20>=products.amount)
and (providers.name like 'P%');