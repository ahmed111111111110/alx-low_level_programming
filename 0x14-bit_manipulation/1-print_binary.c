#include "main.h"
#include <stdio.h>
/**
* print_binary - convert an unsigned int to a binary number
* @n: number to search
* Return: The binary representation of a number.
*/

void print_binary(unsigned long int n) {
int j,cnt = 0;
unsigned long int res;
for (j = 62; j >= 0; j--){
res = n >> j;
if (res & 1){
_putchar('1');
cnt++;
} else if (cnt){
_putchar('0');
}
}
if(!cnt)
_putchar('0');
}
