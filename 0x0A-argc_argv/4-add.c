#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* main - Print sum of integers.
* @argc: Number if lines arguments
* @argv: Argument Vector
* Return: 1 if non-integer, 0 otherwise
*/

int main(int argc, char *argv[])
{
int i, j, length, sum;
char *ptr;
if (argc < 2)
printf("0\n");
else
{
sum = 0;
for (i = 1; i < argc; i++)
{
ptr = argv[i];
length = strlen(ptr);
for (j = 0; j < length; j++)
{
if (isdigit(*(ptr + j)) == 0)
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
