#include "holberton.h"
/**
 * print_sign - Prints the sign of a number
 * @n: Character passed to function in order to be evaluated
 * Return: 1 if is greater than zero, 0 if its zero, -1 if its less than zero
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	else
	{
		result = 0;
		_putchar('0');
	}
	return (result);
}
