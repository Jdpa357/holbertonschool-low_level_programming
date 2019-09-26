#include "holberton.h"

/**
 * print_diagonal - Function that prints "/" in succesion
 * @n: Parameter to define the function process
 * Return: 0 Always (Success)
 */

void print_diagonal(int n)
{
	int lines = 0;

	if (n > 0)
	{

		while (n > 0)
		{
			int blank = 0;

			while (blank != lines)
			{
				_putchar(' ');
				blank++;
			}
			_putchar('\\');
			_putchar('\n');

			lines++;
			n--;
		}
	}
	_putchar('\n');

}
