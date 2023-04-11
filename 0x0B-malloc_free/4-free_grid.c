#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - frees 2d array
* @grid: 2d array
* @height: height
* Return: non
*
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
