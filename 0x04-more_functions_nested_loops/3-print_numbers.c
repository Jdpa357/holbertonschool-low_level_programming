#include "holberton.h"

/**
 * print_numbers - Function that displays the first 10 numbers starting at 0
 * Return: no return (Void function)
 */

void print_numbers(void)
{

	int a = 0;

	do {
		_putchar(a + '0');
		++a;
	} while (a < 10);
	_putchar('\n');
}
