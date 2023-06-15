#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to the head of a doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
