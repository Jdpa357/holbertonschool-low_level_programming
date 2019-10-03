#include "holberton.h"
/**
 * _strcmp - Function to compare two strings
 * @s1: First parameter to be compared to
 * @s2: Second parameter to compare with
 * Return: Positive if is greater than, Negative if otherwise and 0 if equals
 */

int _strcmp(char *s1, char *s2)
{

	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);

}
