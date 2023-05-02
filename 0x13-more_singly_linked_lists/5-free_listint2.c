#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_listint - free list
* @head: pointer to linked list need to free
*/
void free_listint2(listint_t **head)
{
listint_t *current = *head;
while (current != NULL)
{
listint_t *next = current->next;
free(current);
current = next;
}
*head = NULL;
}
