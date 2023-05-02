#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* listint_len - print number of elements in linked list
* @h: pointer to linked list
*
* Return: The number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t x = 0;

while (h)
{
x++;
h = h->next;
}
return (x);
}
