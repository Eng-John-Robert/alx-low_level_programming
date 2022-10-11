#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free instance of struct dog
 * @d: instance to be freed
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name) /* free members of struct that exist */
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
