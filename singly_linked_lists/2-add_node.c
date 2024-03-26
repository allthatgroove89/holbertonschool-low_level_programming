#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: a pointer to list
 * @str: a constant pointer
 * Return: the address of the new element, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int i = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	if (str == NULL)
	{
		node->str = NULL;
		node->len = 0;
	}
	else
	{
		node->str = strdup(str);
		node->len = i;
	}
	node->next = *head;
	*head = node;
	return (node);
}

