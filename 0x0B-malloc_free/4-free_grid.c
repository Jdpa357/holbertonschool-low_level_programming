#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - Function to free a 2 dimensional grid previously created
 * @grid: First parameter passed to function to process
 * @height: Second parameter passed to function to process
 * Return: No return (Void function)
 */

void free_grid(int **grid, int height)
{

	if (grid == NULL)
	{
		return;
	}
	while (height > 0)
	{
		height--;
		free(grid[height]);
	}
	free(grid);

}
