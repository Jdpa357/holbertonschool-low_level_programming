#include "dog.h"
#include <stdio.h>

/*
 * init_dog - Function that initialize a variable of type struct dog
 * @d: Structure of type dog defined in header file "dog.h"
 * @name: Attribute of structure
 * @age: Attribute of structure
 * @owner: Attribute of structure
 * Return: No return (Void function)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;

}
