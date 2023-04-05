#include "main.h"
/**
*factorial - Prints a factorial of any number
*@n : int
 *
* Return: factorial number
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
