#include "holberton.h"
/**
 * puts_half - Function to print the half of a string
 * @str: Value passed to the function
 * Return: No return (Void function)
 */

void puts_half(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
		;
	size++;
	for (size /= 2; str[size] != '\0'; size++)
	{
		_putchar(str[size]);
	}
	_putchar('\n');

}
