#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - Function to allocate memory using malloc
 * @b: First parameter passed to function to process
 * Return: A pointer to the allocated memory or if fails exit with status 98
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
	free(ptr);

}
