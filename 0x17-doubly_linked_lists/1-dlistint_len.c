#include "lists.h"

/**
 * dlistint_len - Get the length of a doubly linked list
 * @h: Head of the doubly linked list
 * Return: Length a the doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t length = 0;

	while (tmp)
	{
		tmp = tmp->next;
		++length;
	}
	return (length);
}
