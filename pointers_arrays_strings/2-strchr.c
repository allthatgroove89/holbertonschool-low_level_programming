#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @c: not sure what this variable is now
 * @s: pointer to c
 * Return: a pointer of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

while (s[i] != '\0' && s[i] != c)
{
i++;
}
if (s[i] == c)
{
return (&s[i]);
}
else

return (0);
}

