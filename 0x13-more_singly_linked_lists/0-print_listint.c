#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint - print every element in linked list
* @h: pointer to linked list
*
* Return: The number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t x = 0;

while (h)
{
printf("%d\n", h->n);
x++;
h = h->next;
}
return (x);
}
