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

	if (n > 1)
		print_binary(n >> 1);

	printf("%lu", n & 1);

}
