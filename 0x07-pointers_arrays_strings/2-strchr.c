#include "holberton.h"
/*
 * _strchr - Function to locate a character in a string
 * @s: First parameter passed to the function to process
 * @c: Second parameter passed to locate in the function process
 * Return: A pointer to the first ocurrence of the character passed in the
 * string, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i, counter;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
	{
		counter++;
	}
	return (s + counter);
}
