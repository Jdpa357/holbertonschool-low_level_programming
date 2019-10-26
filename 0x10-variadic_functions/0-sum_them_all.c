#include "variadic_functions.h"

/**
 * sum_them_all - Function to sum "@n" number of parameters passed into it
 *
 * @n: The number of parameters given to the function
 * Return: The sum of all the parameters given to the function
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list nums;
	int sum;
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);

	sum = 0;
	va_start(nums, n);
	while (i < n)
	{
		sum += va_arg(nums, int);
		i++;
	}
	va_end(nums);
	return (sum);

}
