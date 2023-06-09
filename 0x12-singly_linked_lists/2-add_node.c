#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_n = malloc(sizeof(list_t));
unsigned int len = 0;
while (str[len])
{
len++;
}
if (!new_n)
{
return (NULL);
}
new_n->str = strdup(str);
new_n->len = len;
new_n->next = *head;
*head = new_n;

return (new_n);
}
