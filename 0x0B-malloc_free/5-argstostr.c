#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - Function to concatenate all the arguments passed to the program
 * @ac: First parameter passed to the function to process
 * @av: Second parameter passed to the function to process
 * Return: A pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, size = 1;
	char *arguments;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}
	arguments = malloc(sizeof(char) * size + 1);
	if (arguments == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arguments[k] = av[i][j];
			k++;
		}
		arguments[k] = '\n';
		k++;
	}
	arguments[k] = '\0';
	return (arguments);
}
