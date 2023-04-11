#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concat two strings
 * @s1: string input One
 * @s2: string input Two
 * Return: concat s1 and s2
 *
 */
char *str_concat(char *s1, char *s2)

{
char *p;
int x, y;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
x = y = 0;
while (s1[x] != '\0')
{
x++;
}
while (s2[y] != '\0')
{
y++;
}
p = malloc(sizeof(char) * (x + y + 1));
if (p == NULL)
{
return (NULL);
}
x = y = 0;
while (s1[x] != '\0')
{
p[x] = s1[x];
x++;
}
while (s2[y] != '\0')
{
p[x] = s2[y];
y++;
x++;
}
p[x] = '\0';
return (p);
}
