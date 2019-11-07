#include "holberton.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 *
 * @n: Pointer to the number we want to process
 * @index: The index, starting from 0 of the bit we want to set
 * Return: 1 if success, or -1 if otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	long unsigned int mask;
	if (index > sizeof(*n) * 8)
		return (-1);
	mask = 1 << index;
	*(n) = (*(n) & ~mask) | ((1 << index) & mask);

	return (1);
}
