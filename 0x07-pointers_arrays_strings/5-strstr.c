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

	while (*haystack != '\0')
	{
		char *i = haystack;
		char *j = needle;
		while (*j == *haystack && *j != '\0' && *haystack != '\0')
		{
			haystack++;
			j++;
		}
		if (*j == '\0')
		{
			return (i);
		}
		haystack = i + 1;
	}
	return (0);

}
