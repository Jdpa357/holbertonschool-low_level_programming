#include "holberton.h"

/**
 * print_number - Function that prints an integer char by char
 * @n: Integer to be used by the function
 * Return: No return (Void function)
 */

void print_number(int n)
{

	char lastDigit;
	long reversed;

	if (n < 0)
	{
		_putchar('-');
		lastDigit = (char)('0' - (n % 10));
		n /= -10;
    	}
	else
	{
		lastDigit = (char)((n % 10) + '0');
		n /= 10;
	}

	reversed = 0;
	while (n > 0)
	{
		reversed = reversed * 10 + (n % 10);
		n /= 10;
	}
	while (reversed > 0)
	{
		char c = (char)((reversed % 10) + '0');
		_putchar(c);
		reversed /= 10;
	}
	_putchar(lastDigit);
}
