#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - Program to print the name of itself
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{

	UNUSED(argc);
	printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
