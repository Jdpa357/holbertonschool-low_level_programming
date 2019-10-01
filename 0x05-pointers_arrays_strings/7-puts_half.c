#include "holberton.h"
/**
 * puts_half - Function to print the half of a string
 * @str: Value passed to the function
 * Return: No return (Void function)
 */

void puts_half(char *str)
{
	int i, counter, length;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}
	if (counter % 2 == 0)
	{
		length = counter / 2;
		for (i = counter; i > counter / 2; i--)
		{
			_putchar(str[length]);
			length++;
		}
	}
	else
	{
		length = (counter - 1) / 2;
		for (i = (counter - length); i <= counter; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');

}
