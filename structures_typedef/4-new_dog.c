#include "dog.h"
/**
 * new_dog - creates a new struct
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
 * Return: new struct dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = _strcpy(name);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strcpy(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}

/**
 * _strlen - count the lenght of a string
 * @s: string to be measure
 * Return: lenght
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i + 1);
}

/**
 * _strcpy - copies a string
 * @s: string
 * Return: copy of the string
 */

char *_strcpy(char *s)
{
	int i;
	int len = _strlen(s);
	char *scopy = malloc(len);

	if (scopy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		scopy[i] = s[i];
	}

	return (scopy);
}
