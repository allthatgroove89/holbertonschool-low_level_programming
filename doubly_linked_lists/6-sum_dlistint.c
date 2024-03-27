#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all data of the list
 * @head: list start
 * Return: 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
