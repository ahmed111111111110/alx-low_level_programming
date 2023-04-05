#include "main.h"
/**
 * sqrtvalus - Makes possible from 1 to n
 * @x: same number as n
 * @y: number from 1 to n
 *
 * Return: possible values;
 */
int sqrtvalus(int x, int y)
{
if (y * y == x)
return (y);
else if (y * y > x)
return (-1);
return (sqrtvalus(x, y + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: sqr for any number
 */
int _sqrt_recursion(int n)
{
return (sqrtvalus(n, 1));
}
