#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
		int len;

		for (len = 0; s1[len] && s2[len]; len++)
		{
			if (s1[len] != s2[len])
			{
				return (s1[len] - s2[len]);
			}
		}
		return (0);
}
