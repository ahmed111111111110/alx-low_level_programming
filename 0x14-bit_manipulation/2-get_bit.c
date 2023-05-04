#include "main.h"
#include <stdio.h>
/**
* get_bit - value of specific index
* @n: number to search
* @index: index of the bit
*
* Return: Value of bit if success or -1 if fails.
*/

int get_bit(unsigned long int n, unsigned int index) {
if (index >= 64){
    return (-1);
}
    return ((n >> index ) & 1);
}
