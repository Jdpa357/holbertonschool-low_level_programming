#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Function to sum two parameters passed into it
 * @a: First parameter passed to function
 * @b: Second parameter passed to function
 * Return: The result of the operation of "@a" and "@b"
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that substract two parameteres passed into it
 * @a: First parameter passed to function to process
 * @b: Second parameter passed to function to process
 * Return: The result of the operation of "@a" and "@b"
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplies two parameters passed into it
 * @a: First parameter passed to function to process
 * @b: Second parameter passed to function to process
 * Return: The result of the operation of "@a" and "@b"
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that divides two parameters passed into it
 * @a: First parameter passed to function to process
 * @b: Second parameter passed to function to process
 * Return: The result of the division of "@a" by "@b"
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function that carries a module operation between two parameters
 * passed into it
 * @a: First parameter passed to function to process
 * @b: Second parameter passed to function to process
 * Return: The remander of the division of "@a" by "@b"
 */

int op_mod(int a, int b)
{
	return (a % b);
}
