#include "main.h"

/**
 * _strncat - Function that concatenates two strings.
 *
 * @dest: string destinnation
 * @src: string source
 * @n: maximun number of characters to append from src
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
		int i, dlen;

		for (dlen = 0; dest[dlen] != '\0'; dlen++)
		;
		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[dlen + i] = src[i];
		}
		dest[dlen + i] = '\0';

		return (dest);
}

