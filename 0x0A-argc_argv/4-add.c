#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

/**
 * main - Program to add positive numbers only
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if success and 1 if otherwise
 */

int main(int argc, char **argv)
{
	int i, index, result;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (index = 0; argv[i][index] != '\0'; index++)
			{
				if (isdigit(argv[i][index]) == 0)
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
