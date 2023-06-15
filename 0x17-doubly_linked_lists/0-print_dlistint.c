#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Function prints a doubly linked list
 * @h: The head of a doubly linked list
 * Return: length of the doubly linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t length = 0;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		++length;
	}
	return (length);
}
