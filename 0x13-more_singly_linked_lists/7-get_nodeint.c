#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* get_nodeint_at_index - return the node at a certain index
* @head: pointer to linked list need to free
* @index: index of the node to be return
* * Return: pointer to the node we're looking for, or NULL if it fails
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index) {
unsigned int count = 0;
listint_t *current = head;
if (head == NULL) {
return (NULL);
}
while (current != NULL && count < index) {
current = current->next;
count++;
}

return (current);
}
