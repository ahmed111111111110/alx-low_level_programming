#include "main.h"
/**
* binary_to_uint - convert a binary number to an unsigned int
* @b: pointing to a string of 0 and 1 chars
* Return: The converted number
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0;
int i = 0;
while (b[i] != '\0')
{
if (b[i] == '1')
{
res = res * 2 + 1;
}
else if (b[i] == '0')
{
res = res * 2;
}
else
{
return (0);
}
i++;
}
return (res);
}
