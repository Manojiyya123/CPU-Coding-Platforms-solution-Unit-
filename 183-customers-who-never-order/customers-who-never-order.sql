# Write your MySQL query statement below
select name as customers from customers left join orders on orders.customerid=customers.id where orders.id is null;