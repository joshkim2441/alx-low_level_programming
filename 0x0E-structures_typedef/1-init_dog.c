#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - it initializes variable of struct dog type
 * @d: a pointer to initialize struct dog
 * @name: the name to initialize
 * @age: the age to initialize
 * @owner: the owner to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}