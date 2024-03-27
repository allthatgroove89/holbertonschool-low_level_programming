#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a list
 * @index: node index
 * @head: start of list
 * Return: Null if node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}


