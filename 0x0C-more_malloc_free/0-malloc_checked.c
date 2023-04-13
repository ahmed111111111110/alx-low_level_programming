#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - allocates using malloc
* @p: number of bytes
* Return: pointer to memory
*/

void *malloc_checked(unsigned int p)
{
void *ptr;
ptr = malloc(p);
if (ptr == NULL)
exit(98);
return (ptr);
}
