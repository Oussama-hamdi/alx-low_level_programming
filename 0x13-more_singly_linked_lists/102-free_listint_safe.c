#include "lists.h"

/**
 * looped_len2 - prints a listint_t list
 * @head: Pointer to the head of a linekd list
 * Return: 0 in fail
 */

size_t looped_len2(const listint_t *head)
{
	const listint_t *st, *en;
	size_t node = 1;

	if (!head || !head->next)
		return (0);

	st = head->next;
	en = (head->next)->next;

	while (en)
	{
		if (st == en)
		{
			st = head;
			while (st != en)
			{
				node++;
				st = st->next;
				en = en->next;
			}

			st = st->next;
			while (st != en)
			{
				node++;
				st = st->next;
			}

			return (node);
		}

		st = st->next;
		en = (en->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees listint_t list
 * @h: Pointer
 * Return: Length of the listint_t
 */

size_t free_listint_safe(listint_t **h)
{
	size_t node;
	unsigned int i;
	listint_t *tmp;

	node = looped_len2(*h);

	if (!node)
	{
		for (; h && *h; node++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}
	else
	{
		for (i = 0; i < node; i++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;

	return (node);
}
