#include "main.h"

/**
 * _isupper - Checks for uppercase characters
 * @c : char to check
 *
 * Return: 1 if c is uppercase ,0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
		else
		return (0);
}
