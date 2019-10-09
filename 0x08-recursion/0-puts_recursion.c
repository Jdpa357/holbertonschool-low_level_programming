#include "holberton.h"
/**
 * _puts_recursion - Function to print a string using recursion
 * @s: First parameter passed to function to process
 * Return: No return (Void function)
 */

void _puts_recursion(char *s)
{

	int i;

	i = 0;
	if (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
		return;
	}

}
