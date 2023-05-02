#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - delete the head node of list
* @head: pointer to linked list need to free
 *
 * Return: the data inside the deleted element or 0 if empty,
*/
int pop_listint(listint_t **head)
{
if (*head == NULL)
{
return (0);
}

listint_t *old_head = *head;
int n = old_head->n;
*head = old_head->next;
free(old_head);

return (n);
}
