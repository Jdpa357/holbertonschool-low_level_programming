#include "holberton.h"
/**
 * _memset - Function that fills the first number of bytes passed to
 * @s: Destination parameter
 * @b: Source parameter
 * @n: Number of bytes to be filled by function
 * Return: A pointer to the memory area of destination
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0;i < n; i++)
	{
			s[i] = b;
	}

	return (s);
}
