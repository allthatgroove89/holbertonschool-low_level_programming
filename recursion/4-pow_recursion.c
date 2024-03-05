#include "main.h"

/**
 * _pow_recursion - returns the value of an integer
 *                  raised to the power of another
 * @x: integer to get the value of
 * @y: integer to be raised
 * Return: the value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
