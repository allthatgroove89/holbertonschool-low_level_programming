#include "main.h"

/**
 * _puts_recursion - prints a string recursivley
 * @s: points to string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

