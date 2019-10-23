#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Function to math processes with arguments passed into it
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i, j;

	i = 0, j = 0;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '%' || argv[2][0] == '/') && (argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(i, j));
	return (0);
}
