#include "main.h"

/**
 * _isalpha - Check alphabetic characters
 * @c: The character to be checked
 * Return: l for alphabetic character or 0 for anything else
 */

int _isalpha(int c)

{

		if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		{
		return (1);
		}
		return (0);
}
