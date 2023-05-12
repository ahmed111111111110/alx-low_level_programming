#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
/**
 *main - Copy the content of a file to another.
 *@argc: number of arguments.
 * @argv: array of pointers to arguments.
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
FILE *file_from, *file_to;
char buffer[1024];
size_t bytes_read;
if (argc != 3)
{
fprintf(stderr, "Usage: cp file_from file_to\n");
exit(97);
}

file_from = fopen(argv[1], "r");
if (file_from == NULL)
{
fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

file_to = fopen(argv[2], "w");
if (file_to == NULL)
{
fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}

chmod(argv[2], 0666);


while ((bytes_read = fread(buffer, 1, 1024, file_from)) > 0)
{
fwrite(buffer, 1, bytes_read, file_to);
}
fclose(file_from);
fclose(file_to);
return (0);
}
