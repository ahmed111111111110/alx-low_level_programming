#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint_end - adds new node at the end of list
* @head: pointer to linked list first node
* @n : data will be insert
*
* Return: pointer to new node or NULL if fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}

new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
listint_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;

return (new_node);
}
