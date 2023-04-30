#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: Pointer to the head of a linked list
 * Return: NULL in fail or loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *st, *en;

	if (!head || !head->next)
		return (NULL);

	st = head->next;
	en = head->next->next;

	while (en)
	{
		if (st == en)
		{
			st = head;

			while (st != en)
			{
				st = st->next;
				en = en->next;
			}
			return (st);
		}

		st = st->next;
		en = en->next->next;
	}

	return (NULL);

}
