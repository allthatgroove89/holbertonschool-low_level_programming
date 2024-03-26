#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the beginning of a list
 * @head: a pointer to list
 * @str: a constant pointer
 * Return: the address of the new element, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;
	int i = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last = *head;
	for (; last->next != NULL; last = last->next)
		;
	last->next = new_node;
	return (new_node);
}
