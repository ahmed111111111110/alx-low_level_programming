#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - making grid
 * @width: width
 * @height: height
 * Return: pointer to 2d array
 *
 */
int **alloc_grid(int width, int height)
{
int **p;
int x, y;
if (width <= 0 || height <= 0)
{
return (NULL);
}
p = malloc(sizeof(int *) * height);
if (p == NULL)
{
return (NULL);
}
for (x = 0; x < height; x++)
{
p[x] = malloc(sizeof(int) * width);
if (p[x] == NULL)
{
for (; x >= 0; x--)
{
free(p[x]);
}
free(p);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
{
p[x][y] = 0;
}
}
return (p);
}
