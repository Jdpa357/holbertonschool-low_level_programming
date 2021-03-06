#include "holberton.h"
/**
 * _strspn - Function to get the length of a prefix substring
 * @s: First parameter passed to function
 * @accept: Second parameter for the function to process
 * Return: Number of bytes in the initial segment of the first parameter
 * which consist only of bytes from the second parameter
 */

unsigned int _strspn(char *s, char *accept)
{

	int i, j;
	unsigned int counter;

	counter = 0;
	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (counter);
}
