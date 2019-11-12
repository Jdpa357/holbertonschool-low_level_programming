#include "holberton.h"

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
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = malloc(1024);
	if (buff == NULL)
		return (0);
	fileDesc = open(av[1], O_RDONLY);
	if (fileDesc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can`t read from file %s\n", av[1]);
		exit(98);
	}
	fileDesc2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fileDesc2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(98);
	}
	do {
		fileDRead = read(fileDesc, buff, 1024);
		if (fileDRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		fileDWrite = write(fileDesc2, buff, fileDRead);
		if (fileDWrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (fileDRead == 1024);

	if (close(fileDesc) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fileDesc %d\n", fileDesc);
		exit(100);
	}
	if (close(fileDesc2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fileDesc2 %d\n", fileDesc2);
		exit(100);
	}
	return (0);
}
