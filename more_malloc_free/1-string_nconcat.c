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
char *concat_str;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		len2 = n;

	concat_str = malloc(len1 + len2 + 1);
	if (concat_str == NULL)
		return (NULL);

	while (i < len1)
	{
		concat_str[i] = s1[i];
		i++;
	}

	while (i < (len1 + len2))
	{
		concat_str[i] = s2[j];
		i++;
		j++;
	}
	concat_str[i] = '\0';

	return (concat_str);
}
