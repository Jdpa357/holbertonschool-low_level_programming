#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - Program that prints the number of arguments passed into it
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	UNUSED(**argv);
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);

}
