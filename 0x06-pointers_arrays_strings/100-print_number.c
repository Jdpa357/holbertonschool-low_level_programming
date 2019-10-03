#include "holberton.h"
/**
 * print_number - Function to print integers
 * @n: First parameter passed to the function
 * Return: No return (Void function)
 */
void print_number(int n)
{
	int  i, j;

	i = 1;
	j = n;
	if (n < 0)
	{
		i = i * -1;
		_putchar('-');
	}
	while (j > 9 || j < -9)
	{
		j = j / 10;
		i = i * 10;
	}
	while (i > 9 || i < -9)
	{
		_putchar((n / i) % 10 + '0');
		i = i / 10;
	}
	if (n < 0)
	{
		_putchar((n % 10)  * -1 + '0');
	}
	else
	{
		_putchar(n % 10 + '0');
	}
}
