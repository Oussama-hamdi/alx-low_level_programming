#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the index of a node
 * @head: Pointer to the head of a doubly linked list
 * @index: Index to find
 * Return: Pointer to nodeor NULL in fail
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int count = 0;

	while (curr)
	{
		if (index == count)
			return (curr);

		curr = curr->next;
		++count;
	}
	return (NULL);
}
