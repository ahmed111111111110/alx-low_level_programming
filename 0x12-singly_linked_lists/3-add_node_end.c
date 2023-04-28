#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - add a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
* Return: the address of the new element, NULL if it fail
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_n = malloc(sizeof(list_t));
unsigned int len = 0;
while (str[len])
len++;
if (!new_n)
{
return (NULL);
}

new_n->str = strdup(str);
new_n->len = len;
new_n->next = NULL;

if (*head == NULL)
{
*head = new_n;
}
else
{
list_t *current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_n;
}

return (new_n);
}
