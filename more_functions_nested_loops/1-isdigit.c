#include "main.h"

/**
 * _isdigit - Checks for digits
 * @c: char to be check
 * Return:1 if c is a digit between if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
		else
		return (0);
}
