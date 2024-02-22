#include "main.h"

/**
 * _isupper - Checks for upper character
 * @c : char to check
 *
 * Return: 1 if c is uppercase ,0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 48 && c <= 90)
	{
	return (1);
	}
	return (0);
}
