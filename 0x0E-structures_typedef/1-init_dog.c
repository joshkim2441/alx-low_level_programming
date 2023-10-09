#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - it initializes variable of struct dog type
 * @d: a pointer to initialize struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}

