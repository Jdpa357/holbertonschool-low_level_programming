#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - Function that converts a binary into a unsigned int
 *
 * @b: Pointer to a string of "0" and "1" chars
 * Return: The converted number, or "0" if one of the chars in "@b" is not "0"
 * or "1" and or if "@b" is NULL
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int resul = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			resul = (resul << 1) | 1;
		else if (b[i] ==  '0')
			resul <<= 1;
		else
			return (0);
	}

	return (resul);

}
