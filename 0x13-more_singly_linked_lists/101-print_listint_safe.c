#include "lists.h"

/**
 * looped_len - prints a listint_t list
 * @head: Pointer to the head of a linekd list
 * Return: 0 in fail
 */

size_t looped_len(const listint_t *head)
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
 * print_listint_safe - Prints a listint_t list
 * @head: Pointer to the head of a linked list
 * Return: nodes length
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node;
	unsigned int i;

	node = looped_len(head);

	if (!node)
	{
		for (i = 0; head; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < node; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
