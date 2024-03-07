#include <stdlib.h>
#include "main.h"

 /**
 * malloc_checked - allocates memory using malloc
 * @b: counts elements
 * Return: if malloc fails function should cause normal processs of termination
 */

void *malloc_checked(unsigned int b)
{

	void *mem;

	if (b == 0)
		exit(98);

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
