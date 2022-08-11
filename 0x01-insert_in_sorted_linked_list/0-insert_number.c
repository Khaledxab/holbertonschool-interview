#include "lists.h"

/**
 * insert_node - insert number into node
 * @head: A pointer to the head of the list.
 * @number: The number to be inserted into the list.
 * Return: The new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *nw;
	listint_t *current;
	listint_t *temp;

	current = *head;
	nw = malloc(sizeof(listint_t));
	/* Checking to see if the new node is NULL. */
	if (!nw)
		return (NULL);
	nw->n = number;
	if (!*head || number < (*head)->n)
	{
		nw->next = *head;
		*head = nw;
		return (nw);
	}
	while (current->next && number >= current->next->n)
		current = current->next;
	temp = current->next;
	current->next = nw;
	nw->next = temp;
	return (nw);
}
