#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - Program to print all arguments received
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{

	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(EXIT_SUCCESS);

}
