#include "holberton.h"
int sqrt_test(int, int);
/**
 * _sqrt_recursion - Function to return the natural square root of a number
 * using recursion
 * @n: Parameter passed to function to process
 * Return: The natural square root of a number
 */

int _sqrt_recursion(int n)
{

	if (n == 0)
	{
		return (-1);
	}
	else
	{
		return(sqrt_test(1, n));
	}

}

/**
 * sqrt_test - Function to test if first parameter its square root of
 * the second
 * @i: First parameter passed to function to process against second
 * @n: Second parameter passed to function to process
 * Return: -1 if its not a natural square root and @i if otherwise
 */

int sqrt_test(int i, int n)
{
	if (i > n)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	else
	{
		return (sqrt_test(++i, n));
	}
}
