#include "holberton.h"

/**
 * get_bit - Function that returns the of a bit representation of a number at a
 * given index
 *
 * @n: The number to process by the function
 * @index: The index of the bit that we want to return
 * Return: The value of the bit at "@index" or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{

	int bitStatus;

	if (index > sizeof(n) * 8)
		return (-1);
	bitStatus = (n >> index) & 1;

	return (bitStatus);
}
