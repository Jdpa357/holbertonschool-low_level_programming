#include "holberton.h"

/**
 * error_97 - Prints error message and exit code 97
 */

void error_97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * error_98 - Prints error message and exit code 98
 * @filename: The file that didn't exist or couldn't be read
 */

void error_98(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * error_99 - Prints error message and exit code 99
 * @filename: File that couldn't be created or couldnt be written to
 */

void error_99(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * error_100 - Prints error message and exit code 100
 * @fileDesc: The file descriptor that could not be closed
 */

void error_100(int fileDesc)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileDesc);
	exit(100);
}

/**
 * main - Program that copies the content of a file to another file
 *
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 or Exit code for especial cases
 */

int main(int ac, char **av)
{
	char *buff;
	int fileDesc, fileDesc2, fileDWrite, fileDRead;

	if (ac != 3)
		error_97();
	buff = malloc(1024);
	if (buff == NULL)
		return (0);
	fileDesc = open(av[1], O_RDONLY);
	if (fileDesc == -1)
		error_98(av[1]);
	fileDesc2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fileDesc2 == -1)
		error_99(av[2]);
	do {
		fileDRead = read(fileDesc, buff, 1024);
		if (fileDRead == -1)
			error_98(av[1]);
		fileDWrite = write(fileDesc2, buff, fileDRead);
		if (fileDWrite == -1)
			error_99(av[2]);
	} while (fileDRead == 1024);
	if (close(fileDesc) == -1)
		error_100(fileDesc);
	if (close(fileDesc2) == -1)
		error_100(fileDesc2);
	return (0);
}
