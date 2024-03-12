#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for dogs
 * @d: pointer to the first dog in the list
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);

	free(d);
}
