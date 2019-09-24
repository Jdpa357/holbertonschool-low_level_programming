#include "holberton.h"
/*
 * times_table - prints the table of the number 9 starting from 0 to 9
 */
void times_table(void)
{
	int i, j, factor;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			factor = i * j;
			_putchar(',');
			_putchar(' ');
			if ((factor / 10) != 0)
			{
				_putchar((factor / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((factor % 10) + '0');
		}
		_putchar('\n');
	}
}
