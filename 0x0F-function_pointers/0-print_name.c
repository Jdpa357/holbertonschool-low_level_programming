#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 * @name: Parameter passed to function to process
 * @f: Pointer to function used to print a name
 * Return: No return (Void function)
 */

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);

}
