#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints all the parameters passed into it
 *
 * @separator: String to be printed between the parameters
 * @n: Number of parameters passed to the function
 * Return: No return (Void function)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list nums;
	unsigned int i;

	i = 0;
	va_start(nums, n);
	while (i < n)
	{
		printf("%d", va_arg(nums, unsigned int));
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(nums);
	printf("\n");

}
