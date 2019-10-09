#include "holberton.h"
int checkPal(char *, int);
int strlenRec(char *);
/**
 * is_palindrome - Function to check if a string is a palindrome using
 * recursion
 * @s: Parameter passed to function to process
 * Return: 1 if the parameter is a palindrome and 0 if otherwise
 */

int is_palindrome(char *s)
{

	int i;

	i = strlenRec(s);
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
 * Return: 1 if its a palindrome and 0 if not
 */

int checkPal(char *s, int i)
{

	if (i <= 1)
	{
		return (1);
	}
	else if (*s == *(s + i - 1))
	{
		return (checkPal(s + 1, i - 2));
	}
	else
	{
		return (0);
	}

}

/**
 * strlenRec - Function to determine the length of a string recursively
 * @s: Parameter passed to function to process
 * Return: Length of parameter
 */

int strlenRec(char *s)
{

	if (*s != '\0')
	{
		s++;
		return (1 + strlenRec(s));
	}
	else
	{
		return (0);
	}

}
