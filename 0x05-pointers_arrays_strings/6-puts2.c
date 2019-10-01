#include "holberton.h"
/**
 * puts2 - Prints the even characters of a string
 * @str: Value passed to the function to process
 * Return: No return (Void function)
 */

void puts2(char *str)
{
	int i, counter, length;

	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}
	length = counter;
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
