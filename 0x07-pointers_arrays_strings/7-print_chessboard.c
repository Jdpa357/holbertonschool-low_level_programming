#include "holberton.h"
/**
 * print_chessboard - Function to print a chessboard
 * @a: First parameter of function
 * Return: No return (Void Function)
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			j == 7 ? _putchar('\n') : j;
		}
	}
}
