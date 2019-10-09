#include "holberton.h"
int checkPal(char *, int);
/**
 * is_palindrome - Function to check if a string is a palindrome using
 * recursion
 * @s: Parameter passed to function to process
 * Return: 1 if the parameter is a palindrome and 0 if otherwise
 */

int is_palindrome(char *s)
{

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	if (i == 0)
	{
		return (1);
	}
	else
	{
		return (checkPal(s, i));
	}

}

/**
 * checkPal - Function to check if the string is palindrome
 * @s: String passed to function to process
 * @i: First position of the string
 * @n: Last position of the string
 * Return: 1 if its a palindrome and 0 if not
 */

int checkPal(char *s, int i)
{

	if (i <= 1)
	{
		return (1);
	}
	else if (*s == *(s + i -1))
	{
		return (checkPal(s + 1, i -2));
	}
	else
	{
		return (0);
	}

}
