#include "holberton.h"

/**
 * print_triangle - Function to display cool triangles
 * @size: Parameter to process the function
 * Return: No return (Void function)
 */

void print_triangle(int size)
{

	int blank, space;
	int i = size - 1;

	if (size > 0)
	{
		for (blank = 0; blank < size; blank++)
		{
			for (space = 0; space < size; space++)
			{
				if (space < i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			i--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
	return;
}
