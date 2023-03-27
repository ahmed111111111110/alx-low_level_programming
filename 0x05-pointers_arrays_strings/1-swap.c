#include <stdio.h>
/**
* swap_int - Swaps the values of two integers
*
* @a: An integer to swap
* @b: Another integer to swap
*
* Return: void
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
