#include "main.h"

/**
* _print_rev_recursion - Prints a reverse string followed by a new line
*@s : string
 *
* Return: nothing
*/
void _print_rev_recursion(char *s)
{
if (*s != 0)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}

}
