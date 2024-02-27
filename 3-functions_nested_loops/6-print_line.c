#include "main.h"

/**
 * print_line - Determine the number of times to print "_"
 *@n: integer
 * Return - new line if 0
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar ('_');
	}
	 _putchar('\n');
}
