#include "holberton.h"
/**
 * leet - Function to encode a string
 * @a: Parameter passed to the function to process
 * Return: Encoded string
 */

char *leet(char *a)
{
	int i, j;
	char letter[] = "a,A,e,E,o,O,t,T,l,L";
	char coding[] = "4,4,3,3,0,0,7,7,1,1";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (a[i] == letter[j])
			{
				a[i] = coding[j];
			}
		}
	}

	return (a);

}
