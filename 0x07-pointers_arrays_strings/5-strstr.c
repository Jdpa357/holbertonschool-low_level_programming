#include "holberton.h"
/**
 * _strstr - This function locates the first ocurrence of the substring
 * string of any of the bytes in the second parameter
 * @haystack: First parameter to look in
 * @needle: Second parameter to process in the string
 * Return: A pointer to the byte in @s that matches any of the bytes in
 * @accept, or NULL if there are no matches.
 */

char *_strstr(char *haystack, char *needle)
{

	int i, j;

	i = 0;
	j = 0;
	while (*(haystack + i) != *(needle + j) && *(haystack + i) != '\0')
	{
		i++;
	}
	if (*(haystack + i) != *(needle + j))
	{
		return (0);
	}
	else
	{
		return (haystack + i);
	}

}
