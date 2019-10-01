#include <stdio.h>
/**
 * print_array - Function that prints a given number of elements
 * @a: First value passed to function
 * @n: Second value passed to the function (Limiter)
 * Return: No return (Void function)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *a);
		if (i < n - 1)
		{
			printf(", ");
		}
		a++;
	}
	printf("\n");
	return;

}
