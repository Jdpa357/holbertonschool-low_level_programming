#include "holberton.h"
/**
 * _puts_recursion - Function to print a string using recursion
 * @s: First parameter passed to function to process
 * Return: No return (Void function)
 */

void _puts_recursion(char *s)
{

	_putchar(*s);
	s++;
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}

}
