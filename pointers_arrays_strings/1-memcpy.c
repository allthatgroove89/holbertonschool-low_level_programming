#include "main.h"

/**
 * _memcpy - copies memory area.
 * @src: constant byte
 * @dest: pointed destination
 * @n: bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
