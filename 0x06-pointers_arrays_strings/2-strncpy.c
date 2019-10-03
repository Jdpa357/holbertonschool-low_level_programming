#include "holberton.h"
/**
 * _strncpy - Function that copies a string
 * @dest: Destination parameter to copy to
 * @src: Source parameter to copy from 
 * @n: Limit of bytes to copy by
 * Return: Pointer with the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{

	int dest_len;
	int i;

	dest_len = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}
	for (i = 0; (i < n && src[i] != '\0') || (i < n && src[i] != '\n'); i++)
	{
		dest[i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);

}
