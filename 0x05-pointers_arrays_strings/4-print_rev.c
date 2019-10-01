#include <stdio.h>
#include "holberton.h"
/**
 * print_rev - Function that prints a reversed string
 * @s: Pointer to parameter passed to function
 * Return: No return (Void function)
 */

void print_rev(char *s)
{
	int limit;

	while (*s != '\0')
	{
		limit++;
		s++;
	}
	while (limit > 0)
	{
		s--;
		limit--;
		_putchar(*s);
	}
	_putchar('\n');
	return;
}
