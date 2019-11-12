#include "holberton.h"

/**
 *read_textfile - Function that reads a text file and prints it to the POSIX
 * standard ouput
 *
 * @filename: Pointer to the filename we want to process in the function
 * @letters: Number of letters that the program should read and print from the
 * file
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	char *buff;
	ssize_t fileD, fileDRead, fileDWrite;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	fileD = open(filename, O_RDONLY);

	if (fileD == -1)
		return (0);

	fileDRead = read(fileD, buff, letters);

	if (fileDRead == -1)
		return (0);

	buff[letters + 1] = '\0';

	fileDWrite = write(STDOUT_FILENO, buff, fileDRead);
	if (fileDWrite == -1)
		return (0);

	close(fileD);
	free(buff);
	return (fileDRead);

}
