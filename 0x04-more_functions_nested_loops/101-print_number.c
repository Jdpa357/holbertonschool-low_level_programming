#include "holberton.h"

/**
 * print_number - Function that prints an integer char by char
 * @n: Integer to be used by the function
 * Return: No return (Void function)
 */

void print_number(int n)
{

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	else
	{
		_putchar(n % 10 + '0');
	}

}
