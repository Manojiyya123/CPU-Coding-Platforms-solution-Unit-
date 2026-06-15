# Write your MySQL query statement below
select firstname as firstName  , lastname as lastName , city , state from person left join address on person.personid=address.personid;