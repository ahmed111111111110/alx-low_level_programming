#include "lists.h"
#include <stdio.h>
/**
* print_list - Prints all the elements in linked list
* @h: Pointer to the list_t
*
* Return: The number of nodes
*/

size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)
{
if (h->str)
{
printf("[%u]%s\n", h->len, h->str);
}
else {
printf("[0] (nil)\n");
}
count++;
h = h->next;
}
return (count);
}
