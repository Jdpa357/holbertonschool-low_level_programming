#include "holberton.h"
/**
 * print_diagsums - Function to print the sum of the two diagonals of a matrix
 * @a: First parameter passed to function to process
 * @size: Second parameter passed to function to process
 * Return: No return (Void function)
 */

void print_diagsums(int *a, int size)
{

	int i, j, k, l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i < (size * size))
	{
		j = *(a + i);
		k = k + j;
		i = i + size + 1;
	}
	i = size - 1;
	while (i < ((size * size) - 1))
	{
		j = *(a + i);
		l = l + j;
		i = i + (size - 1);
	}

	printf("%d, %d\n", k, l);

}
