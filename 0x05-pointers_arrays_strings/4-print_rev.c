#include <stdio.h>
#include <string.h>

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */
void print_rev(char *s) {
int len = strlen(s);
for (int i = len - 1; i >= 0; i--) {
printf("%c", s[i]);
}
printf("\n");
}
