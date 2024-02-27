#include "main.h"

/**
 * print_rev - a function that print a string in reverse,followed by a new line
 * @s: a pointer to a string
 * return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

	{
		;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
