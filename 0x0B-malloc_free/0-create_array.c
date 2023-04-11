#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of char c in size size
 * @size:array size
 * @c:char that will assign
 *
 * Return: pointer to array , NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
p = malloc(5 * sizeof(char));
if (size == 0 || p == NULL)
return (NULL);
for (i = 0;  i < size; i++)
p[i] = c;

return (p);
}
