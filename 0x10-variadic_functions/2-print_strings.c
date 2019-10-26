#include "variadic_functions.h"

/**
 * print_strings - Function that print strings using variadic functions
 *
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 * Return: No return (Void function)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list strings;
	unsigned int i;
	char *string;

	va_start(strings, n);
	i = 0;

	while (i < n)
	{
		string = va_arg(strings, char*);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");

	va_end(strings);

}
