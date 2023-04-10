#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Print multiplies of two numbers.
* @argc: Number if lines arguments
* @argv: Argument Vector
* Return: 0 if sucsses else return 1
*/

int main(int argc, char *argv[])
{
int i, j;
if (argc == 1 || argc == 2)
{
printf("Error\n");
return (1);
}
else
{
j = 1;
for (i = 1; i < 3; i++)
{
j *= atoi(argv[1]);
printf("%d\n", j);
}
}
return (0);
}
