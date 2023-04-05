#include "lists.h"

/**
 * pop_listint - delete the first element
 * @head: pointer to the head of a list
 * Return: the value of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val;

	if (!head || !*head)
		return (0);
	val = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (val);
}
