#include "holberton.h"
int compare(const char *, const char*);
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
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');

}
/**
 * compare - Function to compare the processed strings
 * @first: String to compare to
 * @second: String which will be compared to
 * Return: Returns true if @first and @second are equals
 */
int compare(const char *first, const char *second)
{

	while (*first && *second)
	{
		if (*first != *second)
		{
			return (0);
		}
		first++;
		second++;
	}
	return (*second == '\0');

}
