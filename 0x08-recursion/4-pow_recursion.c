#include "main.h"
/**
*_pow_recursion - Prints a power of any number
*@x : the base number
*@y : the pow number
*
* Return: pow number
*/
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
