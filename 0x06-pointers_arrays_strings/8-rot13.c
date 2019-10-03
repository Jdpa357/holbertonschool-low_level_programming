#include "holberton.h"
/**
 * rot13 - Function to encode a string using rot13
 * @a: Parameter passed to the function to process
 * Return: Pointer to the encoded string
 */

char *rot13(char *a)
{

	char low1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char low2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int c = 0;
	int low_c;

	while (*(a + c) != '\0')
	{
		low_c = 0;
		while (low1[low_c] != '\0')
		{
			if (*(a + c) == low1[low_c])
			{
				*(a + c) = low2[low_c];
				break;
			}
			low_c++;
		}
		c++;
	}
	return (a);
}
