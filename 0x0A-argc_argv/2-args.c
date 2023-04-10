#include "main.h"
#include <stdio.h>

/**
* main - Print all arguments it receives.
* @argc: Number if lines arguments
* @argv: Argument Vector
* Return: 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}

