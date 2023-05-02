#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_listint_safe - free a list
* @h: pointer to linked list
*
* Return: The number of elements in the freed list
*/
size_t free_listint_safe(listint_t **h) {
size_t count = 0;
listint_t *current = *h;
listint_t *next = NULL;

if (h == NULL || *h == NULL) {
return (0);
}
while (current != NULL) {
next = current->next;
free(current);
current = next;
count++;
}
*h = NULL;
return (count);
}
