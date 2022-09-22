#include "lists.h"


/**
 * check_cycle - check cycle in linked list
 * @list: linked list
 * Return: 0 if there is a cycle 1 if not
 */

int check_cycle(listint_t *list)
{
    listint_t *fast = list;
    listint_t *slow = list;

    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
            return (1);
    }
    return (0);
}
