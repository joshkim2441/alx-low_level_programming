#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees allocated memory for struct dog
 * @d: the struct dog to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
