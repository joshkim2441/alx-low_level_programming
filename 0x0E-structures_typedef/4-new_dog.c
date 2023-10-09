#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * *new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: a pointer to the new dog, otherwise NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = strdup(name);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->age = age;

	newDog->owner = strdup(owner);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	return (newDog);
}
