#include "holberton.h"
/**
 * reverse_array - Function to reverse the content of an array of integers
 * @a: Array passed to the function to process
 * @n: Number of elements of the array
 * Return: No return (Void function)
 */

void reverse_array(int *a, int n)
{

	int tmp, counter;

	counter = 0;
	n--;
	while (counter < n)
	{
		tmp = a[counter];
		a[counter] = a[n];
		a[n] = tmp;
		counter++;
		n--;
	}

}
