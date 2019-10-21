#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Function to create a new structure type defined on header file
 * "dog.h"
 * @name: Attribute of the structure type
 * @age: Attribute of the structure type
 * @owner: Attribute of the structure type
 * Return: New structure type defined on header file "dog.h"
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *doggie;
	int i, j, nameLength, ownerLength;

	doggie = malloc(sizeof(struct dog));
	if (doggie == NULL)
		return (NULL);
	for (nameLength = 1; name[nameLength] != '\0'; nameLength++)
		;
	doggie->name = malloc(sizeof(char) * (nameLength + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	for (ownerLength = 1; owner[ownerLength] != '\0'; ownerLength++)
		;
	doggie->owner = malloc(sizeof(char) * (ownerLength + 1));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	doggie->age = age;
	for (i = 0; name[i] != '\0'; i++)
		doggie->name[i] = name[i];
	doggie->name[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
		doggie->owner[j] = owner[j];
	doggie->owner[j] = '\0';

	return (doggie);

}
