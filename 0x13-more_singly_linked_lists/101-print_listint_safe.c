#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint_safe - Prints a listint_t list safely.
* @head: pointer to linked list need to free
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head) {
size_t count = 0;
if (head == NULL) {
return (0);
}


while (head != NULL) {
printf("%d ", head->n);
head = head->next;
count++;
}

printf("\n");

return (count);
}
