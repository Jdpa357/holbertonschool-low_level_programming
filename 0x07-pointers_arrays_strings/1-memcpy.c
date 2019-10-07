#include "holberton.h"
/**
 * _memcpy - Function that copies a given number of bytes from a destination
 * memory area into the given source memory area
 * @dest: Destination parameter of the function
 * @src: Source parameter for the function to process
 * @n: Parameter number of bytes to copy in the function
 * Return: A pointer to destination parameter
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
