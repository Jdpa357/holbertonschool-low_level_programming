#include "holberton.h"
/**
 * puts_half - Function to print the half of a string
 * @*str: Value passed to the function
 * Return: No return (Void function)
 */

void puts_half(char *str)
{
	int i, counter;

	counter = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	}
	if (counter % 2 == 0)
	{
		for (i = 0; i <= counter / 2; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = 0; i <= (counter - 1) / 2; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
	return;

}
