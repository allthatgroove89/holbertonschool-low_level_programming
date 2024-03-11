#include <stdio.h>
#include "dog.h"
#include <string.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct
 * @name: name of the dog
 * @owner: name of the dog owner
 * @age: age of the dog
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->owner = owner;
	d->age = age;

}

