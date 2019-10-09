#include "holberton.h"
/**
 * _pow_recursion - Function to return the value of the first parameter to the
 * power of the second parameter using recursion
 * @x: First parameter of the function to be processed
 * @y: Second parameter of the function to process
 * Return: Value of the first parameter to the power of the second parameter
 */

int _pow_recursion(int x, int y)
{

	if (y > 0)
	{
		return ((x * _pow_recursion(x, y - 1)));
	}
	if (y < 0)
	{
		return (-1); 
	}
	else
	{
		return (1);
	}

}
