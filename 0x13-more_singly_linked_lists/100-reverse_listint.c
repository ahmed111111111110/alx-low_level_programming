#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* reverse_listint - reverses a list
* @head: pointer to linked list need to free
*
* Return: pointer to first node in new list
*/
listint_t *reverse_listint(listint_t **head) {
listint_t *prev = NULL;
listint_t *curr = *head;
listint_t *next = NULL;
if (head == NULL || *head == NULL) {
return (NULL);
}



while (curr != NULL) {
next = curr->next;
curr->next = prev;
prev = curr;
curr = next;
}

*head = prev;

return (*head);
}
