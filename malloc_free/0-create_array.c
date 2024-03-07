#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: char to be initialized elements of the array
 * Return: a pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
	free(ptr);
}
