#include "holberton.h"
/**
 * cap_string - Function to capitalize all words of a string
 * @a: Parameter to be processed by the function
 * Return: Pointer with all the string capitalized
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] = a[i] - 32;
			}
		}
		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' || a[i] == ','
		|| a[i] == ';' || a[i] == '.' || a[i] == '!' || a[i] == '?'
		|| a[i] == '"' || a[i] == '(' || a[i] == ')' || a[i] == '{'
		|| a[i] == '}')
		{
			++i;
			if (a[i] == ' ' || a[i] == '\n')
			{
				++i;
			}
			if (a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] = a[i] - 32;
			}
		}
	}

	return (a);

}
