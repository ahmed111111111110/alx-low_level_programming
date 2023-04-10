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
int x = 3;
if (argc < x || argc > x)
{
printf("Error\n");
return (1);
}
int i = atoi(argv[1]);
int k = atoi(argv[2]);
int result = i * k;
printf("%d\n", result);

return (0);
}
