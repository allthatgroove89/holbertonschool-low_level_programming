#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @b: constant byte
 * @s: pointed destination
 * @n: bytes
 * Return: a pointer to memory of s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
