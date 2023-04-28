#include <stdio.h>
#include "lists.h"

/**
* list_len - Prints length of linked list
* @h: Pointer to the list_t
*
* Return: The length of list
*/

size_t list_len(const list_t *h)
{
size_t count = 0;
while (h)
{
count++;
h = h->next;
}
return (count);
}
