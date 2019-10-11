#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
int _atoi(char *);
/**
 * main - Program to multiply two numbers passed into it
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if success or 1 if error
 */

int main(int argc, char **argv)
{

	if (argc > 2)
	{
		int i, j, result;

		i = atoi(argv[1]);
		j = atoi(argv[2]);
		result = (i * j);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}

}

/**
 * _atoi - Function that converts a string to an integer
 * @s: Parameter passed to the function
 * Return: Integer value on the string
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		result = result * 10 + s[i] - '0';
	}
	return (sign * result);

}
