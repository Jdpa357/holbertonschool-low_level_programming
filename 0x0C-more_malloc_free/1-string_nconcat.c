#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - Function to concatenate two strings
 * @s1: First parameter passed to function to process
 * @s2: Secon parameter passed to function to process
 * @n Third parameter to limit the process
 * Return: A pointer to a newly allocated space in memory or NULL if it fails
 */

char *string_nconcat(char* s1, char* s2, unsigned int n)
{

	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0, j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (j <= n)
	{
		n = j;
	}
	ptr = malloc(sizeof(char) * (i + n) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];	
	}
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);

}
