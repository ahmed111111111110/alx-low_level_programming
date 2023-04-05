#include "main.h"

/**
 * _pow_recursion - number x of power  y
 * @x: base Number
 * @y: Power
 *
 * Return: number x of power  y.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
