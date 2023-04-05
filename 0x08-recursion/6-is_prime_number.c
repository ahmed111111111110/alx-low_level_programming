#include "main.h"
/**
 * possible_prime - Makes possible from 1 to n
 * @u: same number as n
 * @v: number that iterates from 1 to n
 *
 * Return: possible prime.
 */
int possible_prime(int u, int v)
{
if (u == v)
return (1);
else if (u % v == 0)
return (0);
return (possible_prime(u, v + 1));
}
/**
 * is_prime_number - if a number is prime or not
 * @n: Number Integer
 *
 * Return: On success 1.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (possible_prime(n, 2));
}
