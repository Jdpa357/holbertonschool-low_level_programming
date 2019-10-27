#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - Function to sum "@n" number of parameters passed into it
 *
 * @n: The number of parameters given to the function
 * Return: The sum of all the parameters given to the function
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list nums;
	unsigned int i, sum;

	va_start(nums, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);

}
