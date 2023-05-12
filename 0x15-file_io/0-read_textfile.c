#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
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
ssize_t too;
ssize_t wr;
char *bud = malloc(sizeof(char) * letters);
ssize_t fgg = open(filename, O_RDONLY);
if (fgg == -1)
return (0);
too = read(fgg, bud, letters);
wr = write(STDOUT_FILENO, bud, too);
free(bud);
close(fgg);
return (wr);
}
