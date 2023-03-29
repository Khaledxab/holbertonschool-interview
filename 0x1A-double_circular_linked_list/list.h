#ifndef LIST_H
#define LIST_H

#include <stdlib.h>

/**
 * struct List - Doubly linked list node structure
 * @str: string stored in the node
 * @prev: pointer to the previous node in the list
 * @next: pointer to the next node in the list
 *
 * Description: Doubly linked list node structure
 */
typedef struct List
{
	char *str;
	struct List *prev;
	struct List *next;
} List;

List *add_node_end(List **list, char *str);
List *add_node_begin(List **list, char *str);

#endif /* LIST_H */
