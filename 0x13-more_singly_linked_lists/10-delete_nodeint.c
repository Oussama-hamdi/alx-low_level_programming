#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a linked list
 * @head: Pointer to a head of a linked list
 * @index: Index of the node to delete
 * Return: 1 in success or -1 in fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *node;
	unsigned int i;

	tmp = *head;
	if (!head || !*head)
		return (-1);
	for (i = 0; i < index - 1 && tmp && index; i++)
		tmp = tmp->next;
	if (!tmp)
		return (-1);
	if (!index)
	{
		node = tmp->next;
		free(tmp);
		*head = node;
	}
	else
	{
		if (!tmp->next)
			node = tmp->next;
		else
			node = tmp->next->next;
		free(tmp->next);
		tmp->next = node;
	}
	return (1);
}
