#include "main.h"
/**
*_sqrt_recursion - Prints a sqrt of any number
*@n : the number that will be in sqrt
*
* Return: sqrt number
*/
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
else
{
double x = _sqrt_recursion(n - 1);
return (x - (x * x - n) / (2 * x));
}
}
