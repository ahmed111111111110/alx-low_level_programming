#include "main.h"
#include <unistd.h>
/**
* _putchar - writes the character a
* @a: The character to print
*
* Return: 1 if success On -1 if fails.
*/
int _putchar(char a)
{
return (write(1, &a, 1));
}
