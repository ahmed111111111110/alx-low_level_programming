#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Print multiplies of two numbers.
* @argc: Number if lines arguments
* @argv: Argument Vector
* Return: 0
*/
int main(int argc, char *argv[])
{
int i = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", i);

return (0);
}

