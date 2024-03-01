#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input value
 * Return: n value
 */

char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ('a' == s[i] || 'A' == s[i])
		{
			s[i] = '4';
		}
		else if ('e' == s[i] || 'E' == s[i])
		{
			s[i] = '3';
		}
		else if ('o' == s[i] || 'O' == s[i])
		{
			s[i] = '0';
		}
		else if ('t' == s[i] || 'T' == s[i])
		{
			s[i] = '7';
		}
		else
		{
			s[i] = '1';
		}
			i++;
	}
	return (s);
}
