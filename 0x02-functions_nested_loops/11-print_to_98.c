#include <stdio.h>
/**
 * print_to_98 - Prints the numbers from the given value to 98
 * @n: value to start the count
 */

void print_to_98(int n)
{
	while (n != 98)
	{
	printf("%d, ", n);

	n = (n < 98) ? (n + 1) : (n - 1);
	}
	printf("98\n");
}
