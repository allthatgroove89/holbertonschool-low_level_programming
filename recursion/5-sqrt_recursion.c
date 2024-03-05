#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: base number
 * Return: 0 or -1 if it doesn't have natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (_square_root(n, 1));

}

/**
 * _square_root - find the square root of a given number
 * @n: number given
 * @rt: variable
 * Return: square root of n
 */

int _square_root(int n, int rt)
{
	if (rt * rt == n)
	{
		return (rt);
	}
	if (rt * rt > n)
	{
		return (-1);
	}
	return (_square_root(n, rt + 1));
}




