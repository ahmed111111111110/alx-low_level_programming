#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* insert_nodeint_at_index - delete node from list
* @head: pointer to linked list need to free
* index : index where it will be deleted
*
* Return: -1 if success or -1 if fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current = *head;
listint_t *previous = NULL;
if (head == NULL || *head == NULL) {
return (-1);
}



for (i= 0; i < index; i++) {
if (current == NULL) {
return (-1);
}
previous = current;
current = current->next;
}

if (previous == NULL) {
*head = current->next;
} else {
previous->next = current->next;
}

free(current);

return (1);
}
