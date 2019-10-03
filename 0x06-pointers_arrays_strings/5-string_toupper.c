#include "holberton.h"
/**
 * string_toupper - Function to change all lowercase letters to uppercase
 * @a: String to be processed by the function
 * Return: Pointer with all the processed characters
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] > 97 && a[i] < 123)
		{
			a[i] = a[i] - 32;
		}
	}
	a[i] = '\0';
	return (a);

}
