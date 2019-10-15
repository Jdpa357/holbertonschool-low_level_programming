#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - Function to concatenate two strings
 * @s1: First parameter passed to function to process
 * @s2: Second parameter passed to function to process
 * Return: A pointer to a newly allocated space in memory which contains the
 * contents of @s1, followed by the contents of @s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, s1Len, s2Len;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1Len = 0;
	s2Len = 0;
	j = 0;
	for (i = 0; s1[i] != 0; i++)
	{
		s1Len++;
	}
	for (i = 0; s2[i] != 0; i++)
	{
		s2Len++;
	}
	concat = (char *)malloc(sizeof(char) * (s1Len + s2Len + 1));
	if (concat != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			concat[j] = s1[i];
			j++;
		}
		for (i = 0; s2[i] != '\0'; i++)
		{
			concat[j] = s2[i];
			j++;
		}
		concat[j] = '\0';
		return (concat);
	}
	else
		return (NULL);
}
