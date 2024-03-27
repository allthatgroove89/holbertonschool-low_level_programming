#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of list
 * @index: index of the node to be deleted
 * @head: head of the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *next_node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL && i < index)
	{
		next_node = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	next_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = next_node;
	free(current);

	return (1);
}

