#include "lists.h"

/**
 * insert_dnodeint_at_index- a function that inserts a new node
 * @h: head of the list
 * @n: where value of new node be inserted
 * @idx: index of the list where new node be inserted
 * Return: address of new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = NULL;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*h == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}

	current = *h;

	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;

	return (new_node);
}

