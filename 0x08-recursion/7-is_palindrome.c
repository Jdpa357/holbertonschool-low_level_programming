#include "holberton.h"
int checkPal(char *, int, int);
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
		return (checkPal(s, 0, i - 1));
	}

}

/**
 * checkPal - Function to check if the string is palindrome
 * @s: String passed to function to process
 * @i: First position of the string
 * @n: Last position of the string
 * Return: 1 if its a palindrome and 0 if not
 */

int checkPal(char *s, int i, int n)
{
	int result;

	if (s[i] == s[n])
	{
		result = 1;
	}
	if (s[i] != s[n])
	{
		result = 0;
	}
	else if (i < n + 1)
	{
		result = (checkPal(s, i + 1, n - 1));
	}
	else
	{
		result = 1;
	}

	return (result);
}
