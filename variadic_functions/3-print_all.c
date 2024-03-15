#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - a function that returns the sum of its parameters
 * @format: list of types of arguments ot passed funcion
 *
 * Return: 0 if n is equal 0
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0)
		{
			printf(", ");
		}
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		if (format[i] == 'f')
		{
			printf("%f", (float)va_arg(args, double));
		}
		if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
			{
				printf("%s", s);
			}
		}
		i++;
	}

	printf("\n");

	va_end(args);
}
