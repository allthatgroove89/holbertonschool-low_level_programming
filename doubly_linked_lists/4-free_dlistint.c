#include "lists.h"

/**
 * free_dlistint - a function that frees a list
 * @head: head node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
