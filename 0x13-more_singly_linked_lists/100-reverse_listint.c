#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to the head of a linked list
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL, *next;

	if (!*head)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}
	*head = pre;
	return (*head);
}
