#include "holberton.h"
/*
 * print_sign - Prints the sign of a number
 * Return: 1 if is greater than zero, 0 if its zero, -1 if its less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar("+");
	return(1);
	}
	else if(n == 0)
	{
	_putchar("0");
	return(0);
	}
	else
	_putchar("-");
	return(-1);
}
