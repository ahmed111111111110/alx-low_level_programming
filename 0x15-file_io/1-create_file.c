#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <bits/types/FILE.h>


/**
* create_file - Create a File
* @filename: pointer to file will be created
* @text_content: pointer to string will be Write in file
*
* Return: 1 if success -1 if fails.
*/

int create_file(const char *filename, char *text_content)
{
FILE *file;
if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
text_content = "";
}
file = fopen(filename, "w");
if (file == NULL)
{
return (-1);
}

fputs(text_content, file);

fclose(file);

return (1);
}
