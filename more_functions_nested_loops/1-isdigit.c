#include "main.h"

/**
 * _isdigit - Checks for digits
 * @c: char to be check
 * Return: 1 if is a digit or 0 for else
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
