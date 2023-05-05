#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
* set_bit - set given index to 1
* @n: pointer to the change number
* @index: index of the bit
*
* Return: 1 if success or -1 if fails.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask = 1UL << index;
if (index >= sizeof(*n) * CHAR_BIT)
{
return (-1);
}
*n |= mask;
return (1);
}
