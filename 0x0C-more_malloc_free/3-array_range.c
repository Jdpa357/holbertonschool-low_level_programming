#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - Function to create an array of integers with the given
 * parameters
 * @min: First parameter passed to function to process
 * @max: Second parameter passed to function to process
 * Return: A pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, val;
	int* ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min) + 1);
	if (ptr == NULL)
		return (NULL);
	val = min;
	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = val;
		val++;
	}
	return (ptr);
}
