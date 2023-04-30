#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a linked list
 * @head: Pointer to a head of linked list
 * @idx: Index of the list where the new node should be added
 * @n: value to add
 * Return: In fail - NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cp = *head, *nw;
	unsigned int i;

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;

	if (!idx)
	{
		nw->next = cp;
		*head = nw;
		return (nw);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (!cp || !cp->next)
			return (NULL);
		cp = cp->next;
	}
	nw->next = cp->next;
	cp->next = nw;

	return (nw);
}
