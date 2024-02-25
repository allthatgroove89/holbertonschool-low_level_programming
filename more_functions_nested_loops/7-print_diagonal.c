#include "main.h"
/**
 * print_diagonal - Function draws a diagonal line
 * @n: - Number of times the character print '\' prints
 * Return -if n is '0' or less, the function prints a newline character.
 */

void print_diagonal(int n)
{
	int i, j;
			if (n > 0)
			{
				for (i = 0; i < n; i++)
				{
				for (j = 0; j < i; j++)
				{
					_putchar(' '); /* Print spaces for indentation */
				}
			_putchar ('\\'); /* Print '\'character */
			_putchar('\n'); /* Move to the next line after each diagonal */
			}
			}
			else
			{
			_putchar('\n'); /* Prints a single newline character */
			}
			}
