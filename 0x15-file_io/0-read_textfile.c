#include <stddef.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>


/**
* read_textfile - Read Text and print to stdout.
* @filename: text file to read
* @letters: Number of letters
*
* Return: actual number of bytes if success
* or zero or null if fails
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
{
return (0);
}

FILE *file = fopen(filename, "r");
if (file == NULL)
{
return (0);
}
char buffer[letters];
size_t bytes_read = fread(buffer, 1, letters, file);
if (bytes_read == 0)
{
fclose(file);
return (0);
}

size_t bytes_written = fwrite(buffer, 1, bytes_read, stdout);

if (bytes_written != bytes_read)
{
fclose(file);
return (0);
}

fclose(file);

return (bytes_read);
}

