#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: string destination
 * @src: string source
 * Return: destinated string
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
{
		dlen++;
}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
	}
	dest[dlen] = '\0';

	return (dest);
}

