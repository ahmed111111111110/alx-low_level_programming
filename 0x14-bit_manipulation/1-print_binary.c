#include "main.h"
#include <stdio.h>
/**
* print_binary - convert an unsigned int to a binary number
* @n: number to search
* Return: The binary representation of a number.
*/

void print_binary(unsigned long int n) {
unsigned i ;
    for ( i = 1 << 31; i > 0 ; i = i / 2) {
        (n & i) ? _putchar('1') : _putchar('0');
    }

}
