#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - Function to returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: Parameter passed to the function to process
 * Return: A pointer with a newly allocated space in memory with a copy
 * of the string in the first parameter
 */

char *_strdup(char *str)
{

	int i;
	unsigned int size;
	char *result;

	if (str != NULL)
	{
		size = 1;
		for (i = 0; str[i] != '\0'; i++)
		{
			size++;
		}
		result = malloc(size);
		for (i = 0; i <= (int)size; i++)
		{
			result[i] = str[i];
		}
		return (result);
	}
	else
	{
		return (NULL);
	}
}
