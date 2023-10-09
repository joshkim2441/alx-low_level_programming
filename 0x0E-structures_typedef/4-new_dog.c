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
	int x, len_o, len_n;

	struct dog *n_dog = NULL;

	len_n = 0;
	while (name[len_n] != '\0')
		len_n++;

	len_o = 0;
	while (owner[len_o] != '\0')
		len_o++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(len_n + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(len_o + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (x = 0; x <= len_n; x++)
		n_dog->name[x] = name[x];
	for (x = 0; x <= len_o; x++)
		n_dog->owner[x] = owner[x];
	n_dog->age = age;

	return (n_Dog);
}
