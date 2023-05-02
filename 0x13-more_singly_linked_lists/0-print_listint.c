#include <stdio.h>
#include "list.h"
/**
 * print_listint - print every element in linked list
 * @h: pointer to linked list
 *
 * Return: The number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t n = 0;

while (h != NULL)
{
printf("%d\n", h->x);
h = h->next;
n++;
}
return (n);
}
