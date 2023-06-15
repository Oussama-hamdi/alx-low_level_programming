#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to the end of a doubly linked list
 * @head: Pointer to the head of doubly linked list
 * @n: Value to add
 * Return: Pointer to the new node or NULL if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *curr = *head;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (curr->next)
		curr = curr->next;

	curr->next = new_node;
	new_node->prev = curr;

	return (new_node);
}
