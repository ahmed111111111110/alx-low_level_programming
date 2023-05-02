#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* insert_nodeint_at_index - insert new node in specific index
* @head: pointer to linked list need to free
* idx : index where it add
*
* Return: pointer to new node or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n) {
unsigned int i;
listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
if (head == NULL) {
return (NULL);
}


if (new_node == NULL) {
return (NULL);
}

new_node->n = n;
new_node->next = NULL;

if (idx == 0) {
new_node->next = *head;
*head = new_node;
} else {
listint_t *current = *head;
for (i = 0; i < idx - 1; i++) {
if (current == NULL) {
return (NULL);
}
current = current->next;
}

new_node->next = current->next;
current->next = new_node;
}

return (new_node);
}
