#include "holberton.h"
int checkPrime(int, int);
/**
 * is_prime_number - Function to evaluate if a number is a prime number using
 * recursion
 * @n: Parameter passed to function to process
 * Return: 1 if its a prime number and 0 if otherwise
 */

int is_prime_number(int n)
{
	
	if (n > 1)
	{
		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (checkPrime(n, n / 2));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * checkPrime - Function to check prime number
 * @n: Parameter to be evaluated by function
 * Return: 1 if its prime and 0 if its not
 */

int checkPrime(int n, int limit)
{
	int result;

	result = 1;
	if (limit == 1)
	{
		result = 1;
	}
	else
	{
		if(n % limit == 0)
		{
			result = 0;
		}
		else
		{
			result = checkPrime(n, limit - 1);
		}
	}

	return (result);
}
