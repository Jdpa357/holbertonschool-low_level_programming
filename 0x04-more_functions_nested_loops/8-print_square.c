#include "holberton.h"

/**
 * print_square - Function that prints a given number of #
 * @size: Value to be used by function process
 * Return: No return (Void function)
 */

void print_square(int size)
{

	if (size > 0)
	{
		int times1, times2;

		for (times1 = 0; times1 < size; times1++)
		{
			for (times2 = 0; times2 < size; times2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
