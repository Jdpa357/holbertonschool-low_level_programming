#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function to free all the dogs
 * @d: Structure type defined in header file "dog.h"
 * Return: No return (Void function)
 */

void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

}
