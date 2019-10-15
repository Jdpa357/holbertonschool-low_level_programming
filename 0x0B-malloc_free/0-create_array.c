#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - Function to create an array of chars and initialize it with
 * the second parameter passed to the function
 * @size: First parameter passed to function to process
 * @c: Second parameter passed to function to process
 * Return: Returns a pointer to the array and/or NULL if the size is 0 or
 * if the function fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(c));
	if (size == 0)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
