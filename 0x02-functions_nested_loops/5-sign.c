#include "main.h"
/**
 * print_sign -00000
 * Return: 1 and prints + if n is greater than zero
 * @n: Ahmed-Hussieny 0000000
 * return -1 and prints
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
