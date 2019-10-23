#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Function to execute another function given as a parameter
 * on each element of an array
 * @array: First parameter passed to function to process
 * @size: Size of the array
 * @action: Pointer to another function used
 * Return: No return (Void function)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
