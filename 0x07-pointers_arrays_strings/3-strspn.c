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

	int i, j, counter;

	i = 0;
	j = 0;
	counter = 0;
	while ((*(s + i)) != ' ')
	{
		while ((*(accept + j)) != '\0')
		{
			if ((*(s + i)) == (*(accept + j)))
			{
				counter += 1;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (counter);

}

