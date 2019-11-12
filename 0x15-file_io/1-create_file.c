#include "holberton.h"

/**
 * _strlen - Function that return the length of a string
 *
 * @str: The string to be processed by the function
 * Return: The length of the string
 */

int _strlen(char *str)
{

	int result = 0;

	while (*(str + result))
	{
		result++;
	}

	return (result);

}

/**
 * create_file - Function that creates a file
 *
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int fileDesc;
	ssize_t fileDWrite;

	if (filename == NULL)
		return (-1);

	fileDesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fileDesc == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fileDWrite = write(fileDesc, text_content, _strlen(text_content));

	if (fileDWrite == -1)
		return (-1);

	close(fileDesc);
	return (1);

}
