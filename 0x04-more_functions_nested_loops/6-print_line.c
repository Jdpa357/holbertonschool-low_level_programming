#include "holberton.h"

/**
 * print_line - Function to display an underscore 'n' times
 * @n: Parameter to be used in function
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	if (n > 0)
	{
		do{
			_putchar('_');
			--n;
		}while (n >= 1);
	}
	_putchar('\n');

}
