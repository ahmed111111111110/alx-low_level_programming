#include "main.h"
/**
*factorial - Prints a factorial of any number
*@n : int
 *
* Return: factorial number
*/
long long factorial(long long n)
{
if (n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
