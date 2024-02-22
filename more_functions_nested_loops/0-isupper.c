#include "main.h"

/**
 * _isupper(int c); - Checks for upper character
 * @c : Uppercase letter
 * Return: 1 is c is uppercase ,0 if otherwise
 */

int _isupper(int c) Checks lettercase
{
	if (c >= 48 && c <= 90)
	{
		return (1);
	}

	return (0);
}

