#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
* flip_bits - count number of bits
* @n: the first number
* @m: the second number
*
* Return: number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int count = 0;
while (diff) {
count += diff & 1;
diff >>= 1;
}
return (count);
}
