#include "main.h"

/**
 * _memset - ironnou
 * @s: pointer to char 
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
