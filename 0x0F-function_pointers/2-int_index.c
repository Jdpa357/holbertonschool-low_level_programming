#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Function to search for an integer in an array
 * @array: First parameter passed to function to process
 * @size: Number of elements in the first parameter array
 * @cmp: Pointer to another function used to compare values
 *
 * Return: The index of the first element of which the "@cmp" function does not
 * return 0, if no element matches then returns -1. If size is less than or
 * equal to 0 then also returns -1;
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, *ptr;

	ptr = malloc(sizeof(int));
	if (array == NULL || size == '\0' || cmp == NULL)
	{
		ptr[0] = '\0';
	}
	else if (size <= 0)
	{
		ptr[0] = -1;
	}
	for (i = 0; i < size ;i++)
	{
		if (cmp(array[i]))
		{
			ptr[0] = i;
			break;
		}
		else
			ptr[0] = -1;
	}
	return (*ptr);

}
