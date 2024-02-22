#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for digits
 * @c: char to be check
 * Return: 1 if c is a digit between 0 and 9
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
