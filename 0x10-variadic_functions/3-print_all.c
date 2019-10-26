#include "variadic_functions.h"

/**
 * int_print - Prints the integers
 *
 * @args: variadic list
 * Return: No return (Void function)
 */

void int_print(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * char_print - Prints characters
 *
 * @args: variadic list
 * Return: No return (Void function)
 */

void char_print(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * str_prnt - Prints a string
 *
 * @args: variadic list
 * Return: No return (Void function)
 */

void str_print(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * flt_print - Prints all the floats
 *
 * @args: Variadic list
 * Return: No return (Void function)
 */

void flt_print(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_all - Function to print anything that is passed into it
 *
 * @format: List of type of arguments passed to the function
 * Return: No return (Void function)
 */

void print_all(const char * const format, ...)
{

	va_list args;
	int i, j;
	args_t arguments[] = {
		{"c", char_print},
		{"i", int_print},
		{"f", flt_print},
		{"s", str_print},
		{NULL, NULL}
	};

	va_start(args, format);
	i = 0;

	while (format != NULL && *(format + i) != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*(format + i) == *(arguments[j]).format)
			{
				arguments[j].function(args);
				if (*(format + i + 1))
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
