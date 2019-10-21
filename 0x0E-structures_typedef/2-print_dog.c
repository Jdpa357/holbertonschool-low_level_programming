#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Function that prints a structure defined on header file "dog.h"
 * @d: Structure passed to the function to process
 * Return: No return (Void function)
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
