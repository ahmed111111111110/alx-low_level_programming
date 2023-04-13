#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _DO - fills memory with a constant byte
* @x: memory area to be filled
* @y: char to copy
* @n: number of times to copy b
* Return: pointer to the memory area s
*/
char *_DO(char *x, char y, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
x[i] = y;
}
return (x);
}
/**
* *_calloc - allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of each element
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);

if (ptr == NULL)
return (NULL);

_DO(ptr, 0, nmemb * size);

return (ptr);
}
