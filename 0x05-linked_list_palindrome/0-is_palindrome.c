#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: double pointer to head of list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */

int is_palindrome(listint_t **head)
{
    listint_t *current, *next, *prev;
    listint_t *slow, *fast;
    int length, mid, i;

    /* empty list */
    if (*head == NULL)
        return (1);

    /* single node list */
    if ((*head)->next == NULL)
        return (1);

    /* double node list */
    if ((*head)->next->next == NULL)
    {
        if ((*head)->n == (*head)->next->n)
            return (1);
        else
            return (0);
    }

    /* find length of list */
    current = *head;
    length = 0;
    while (current != NULL)
    {
        length++;
        current = current->next;
    }

    /* find middle of list */
    mid = length / 2;
    current = *head;
    i = 0;
    while (i < mid)
    {
        i++;
        current = current->next;
    }

    /* reverse second half of list */
    prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    /* compare first half and second half of list */
    slow = *head;
    fast = prev;
    while (slow != NULL && fast != NULL)
    {
        if (slow->n != fast->n)
            return (0);
        slow = slow->next;
        fast = fast->next;
    }

    return (1);
}