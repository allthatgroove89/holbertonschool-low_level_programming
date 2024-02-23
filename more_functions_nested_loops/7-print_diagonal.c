#include "main.h"

/**
 * print_diagonal - Function draws a diagonal line
 * @n: - Number of times the character print '\' prints
 * Retun - New line if '0'
 */

void print_diagonal(int n)
{
		int a;

		for (a = 0; a < n; a++)
		{
			_putchar ('\\');
		}
		_putchar('\n');
}
