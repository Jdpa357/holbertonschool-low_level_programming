#include "holberton.h"

/**
 * more_numbers - Displays the numbers from 0 to 14 in ten different lines
 * Return: no return (Void function)
 */

void more_numbers(void)
{
	int a, b;
	for (a = 0; a < 10; a++)
	{
	b = 0;
		do{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
			++b;
		}while (b <= 14);
		_putchar('\n');
	}
	return;

}
