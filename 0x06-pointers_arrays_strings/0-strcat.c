#include "holberton.h"
/**
 * _strcat - Function to append the source string into the destination
 * @dest: Destination variable to process in the function
 * @src: Source variable to process in the function
 * Return: Returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, srcLen, destLen;

	srcLen = 0;
	destLen = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		srcLen++;
			}
	for (i = 0; dest[i] != '\0'; i++)
	{
		destLen++;
	}
	for (i = 0; i <= srcLen; i++)
	{
		dest[destLen] = src[i];
		destLen++;
	}
	dest[destLen + srcLen] = '\0';
	return (dest);
}
