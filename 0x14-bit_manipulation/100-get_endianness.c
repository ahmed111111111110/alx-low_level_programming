#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
* get_endianness - check the machine is little endian or big endian
* union: data structure store one big endian and one little endian.
* Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
int n = 1;
char *c = (char *)&n;
if (*c == 1)
{
return (1);
}
else
{
return (0);
}
}
