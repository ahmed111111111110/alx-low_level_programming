#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character
 * @a:Ther character to print
 *
 * Return: On success 1.
 */
int _putchar(char a)
{
return (write(1, &a, 1));
}
