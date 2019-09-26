#include <stdio.h>
#include <math.h>

/**
 * main - function to find and print the largest prime factor
 * Return: 0 Always (Success)
 */

int main(void)
{
	long int n = 612852475143;
	int count;

	while (n % 2 == 0)
	{
		printf("%d", 2);
		n = n / 2;
	}

	for (count = 3; count <= sqrt(n); count = count + 2)
	{
		while (n % count == 0)
		{
			printf("%d", count);
			n = n / count;
		}
	}

	if (n > 2)
	{
		printf("%lu", n);
	}
	putchar('\n');
	return (0);
}
