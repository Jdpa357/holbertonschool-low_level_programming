#include "holberton.h"

/**
 * flip_bits - Function that returns the number of bits needed to flip in order
 * to get from one number to another
 *
 * @n: First number to flip
 * @m: Second number to get to by flipping the "@n" number
 * Return: The number of bits needed to flip in order to get from "@n" to "@m"
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int counter;
	int flip;

	counter = 0;
	flip = n ^ m;

	while (flip)
	{
		counter += flip & 1;
		flip >>= 1;
	}

	return (counter);
}
