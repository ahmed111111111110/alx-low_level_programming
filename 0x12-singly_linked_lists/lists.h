#include <stdlib.h>
#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_A - Singly linked list
 * @str: string - string will be malloced
 * @len: length of the string
 * @next: Points to the next node
 *
 * Description: singly linked list node
 */
typedef struct list_A
{
    char *str;
    unsigned int len;
    struct list_A *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node_front(list_t **head, const char *str);
list_t *add_node_back(list_t **head, const char *str);
void free_list(list_t *head);

#endif
