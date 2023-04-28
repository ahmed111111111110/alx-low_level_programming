#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * * free_list - frees a linked list
 * @head: double pointer to the list_t list
*/

void free_list(list_t *head)
{
list_t *current = head;
while (current)
{
list_t *next = current->next;
free(current->str);
free(current);
current = next;
}
}
