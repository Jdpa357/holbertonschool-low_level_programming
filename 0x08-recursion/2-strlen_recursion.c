#include "holberton.h"
/**
 * _strlen_recursion - Function to return the length of a string using
 * recursion
 * @s: First parameter passed to function to process
 * Return: The legnth of the first parameter or 0 if its NULL
 */

int _strlen_recursion(char *s)
{

	if (*s == 0)
	{
		return (0);
	}

	return _strlen_recursion(s + 1) + 1;

}
