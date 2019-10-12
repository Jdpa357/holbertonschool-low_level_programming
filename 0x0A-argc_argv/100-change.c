#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program to print the minimum amount of coins to make change for an
 * amount of money
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 0 if success and 1 if otherwise
 */

int main(int argc, char **argv)
{

	int i, result, coins, counter;
	int change[] = { 25, 10, 5, 2, 1};


	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	i = 0;
	coins = 0;
	counter = 0;
	result  = atoi(*(argv + 1));
	while (i <= 4 && counter != result)
	{
		int j = (result - counter) / change[i];

		if (j > 0)
		{
			coins += j;
			counter += (j * change[i]);
		}

		i++;
	}

	printf("%d\n", coins);
	return (0);

}
