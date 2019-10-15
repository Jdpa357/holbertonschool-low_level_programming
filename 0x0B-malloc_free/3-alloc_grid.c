#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - Function to return a pointer to a 2 dimensional array of int
 * @width: First parameter passed to function to process
 * @height: Second parameter passed to function to process
 * Return: A pointer to a 2 dimensional array of integers or NULL if failure
 */

int **alloc_grid(int width, int height)
{

	int r, c;
	int **m;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(sizeof(int *) * height);

	if (m == NULL)
		return (NULL);

	for (r = 0; r < height; r++)
	{
		m[r] = malloc(sizeof(int) * width);
		if (m[r] == NULL)
		{
			while (r >= 0)
			{
				free(m[r]);
				r--;
			}
			free(m);
			return (NULL);
		}
		for (c = 0; c < width; c++)
		{
			m[r][c] = 0;
		}
	}
	return (m);
}
