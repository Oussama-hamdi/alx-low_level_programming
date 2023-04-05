#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: pointer to the head element
 * Return: sum of all elements in a list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
