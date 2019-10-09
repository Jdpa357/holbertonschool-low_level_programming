#include "holberton.h"
/**
 * factorial - Function to return the factorial of a given number using
 * recursion
 * @n: Parameter passed to function to process
 * Return: The factorial of the parameter integer
 */

int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		fact = -1;
	}
	if (n == 0)
	{
		fact = 1;
	}
	if (n >= 1)
	{
		fact = (n * (factorial(n - 1)));
	}

	return (fact);

}
