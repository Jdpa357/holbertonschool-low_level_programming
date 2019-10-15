#include <stdio.h>
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

	int i, j;
	char *result;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	result = malloc(i * sizeof(*str) + 1);
	if (result == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		*(result + j) = *(str + j);
	}
	*(result + j) = '\0';

	return (result);
}
