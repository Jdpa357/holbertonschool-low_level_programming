#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - Function that prints the binary representation of a number
 *
 * @n: Parameter passed to function to process
 * Return: No return (Void function)
 */

void print_binary(unsigned long int n)
{

	int shift, bin;

	if (n < 2)
		_putchar(n + '0');
	else
	{
		for (shift = 63; shift >= 0; shift--)
		{
			bin = n >> shift;
			if (bin != 0)
			{
				if (bin & 1)
					_putchar('1');
				else
					_putchar('0');
			}
		}
	}

}
