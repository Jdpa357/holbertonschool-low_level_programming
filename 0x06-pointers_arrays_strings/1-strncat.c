#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - Function to concatenate two strings
 * @dest: Destination parameter of the function
 * @src: Source parameter of the function
 * @n: Parameter that limits the bytes to concatenate by the function
 * Return: Returns a pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{

	int dest_len;
	int i;

	dest_len = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	dest[dest_len + 1] = '\0';

	return (dest);

}
