#include "holberton.h"
/**
 * _strcat - Function to append the source string into the destination
 * @dest: Destination variable to process in the function
 * @src: Source variable to process in the function
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (n = 0; src[n] != '\0'; n++, i++)
	{
		dest[i] = src[n];
	}

	return (dest);
}
