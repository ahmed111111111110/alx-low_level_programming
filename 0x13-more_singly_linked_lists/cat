#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* sum_listint - sum of all data in linked list
* @head: pointer to linked list need to free
*
* Return: sum of all elements
*/
int sum_listint(listint_t *head) {
listint_t *current = head;
int sum = 0;
if (head == NULL) {
return (0);
}
while (current != NULL) {
sum += current->n;
current = current->next;
}
return (sum);
}
