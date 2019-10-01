#include <stdio.h>
#include "holberton.h"
/**
 * _puts - Function that prints a string
 * @str: Pointer to the value used by the function
 * Return: No return (Void function)
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return;

}
