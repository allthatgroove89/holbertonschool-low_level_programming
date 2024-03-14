#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of its parameters
 * @n: const unsigned int
 *
 * Return: 0 if n is equal 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;


	va_list args;

	va_start(args, n);


	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);
	return (total);
}
