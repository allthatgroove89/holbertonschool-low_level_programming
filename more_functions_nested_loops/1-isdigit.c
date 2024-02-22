#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for digits
 * @c: char to be check
 * Return: 1 if c is a digit between 0 and 9
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
		else
		return (0);
}
