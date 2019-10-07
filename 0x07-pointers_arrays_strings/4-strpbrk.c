#include "holberton.h"
/**
 * _strpbrk - This function locates the first occurrence in the parameter
 * string of any of the bytes in the second parameter
 * @s: First parameter to look in
 * @accept: Second parameter to process in the string
 * Return: A pointer to the byte in @s that matches any of the bytes in
 * @accept, or NULL if there are no matches.
 */

char *_strpbrk(char *s, char *accept)
{

	int i, j;
	char result;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result = 1;
			}
		}
		if (result == 1)
		{
			return (s + i);
		}
	}
	return (0);

}
