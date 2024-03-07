#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - allocates memory using malloc
 * @s1: first string
 * @s2: second string
 * @n: byte to concat
 * Return: a pointer to new allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2, sum = 0;
	char *ptr;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)

		for (len2 = 0; s2[len2] != '\0'; len2++)

			if (n >= len2)
				sum = len1 + len2;
			else
				sum = len1 + n;

	ptr = malloc(sizeof(char) * sum + 1);
	if (ptr == 0)
		return (0);
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (len2 = 0; len2 < n && s2[len2] != '\0'; len2++)
	{
		ptr[i] = s2[len2];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
