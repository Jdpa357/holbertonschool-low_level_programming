#include "holberton.h"
/**
 * print_last_digit - This function prints the last digit of a number
 * @c: Value to be passed into the function to be evaluated
 * Return: The last digit of the number passed to the function
 */
int print_last_digit(int c)
{
	int last;

	last = c %  10;
	last = (last < 0) ? (last * -1) : last;
	_putchar(last + '0');
	return (last);
}
