#include "holberton.h"
/**
 * print_alphabet_x10 - Displays the alphabet 10 times in different lines
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int alpha;

	for (i = 10; i > 0; i--)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
