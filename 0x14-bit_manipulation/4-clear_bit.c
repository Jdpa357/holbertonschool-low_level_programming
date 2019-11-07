#include "holberton.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index
 *
 * @n: A pointer to the number we want to manipulate
 * @index: The index starting from 0 of the bit we want to set
 * Return: 1 if success, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int mask = 1;

	if (index > sizeof(*n) * 8)
		return (-1);
	mask <<= index;
	*n &= ~mask;

	return (1);
}
