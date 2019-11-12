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

	while(*(str + result))
	{
		result++;
	}

	return (result);

}

/**
 * append_text_to_file - Function that appends text to the end of a file
 *
 * @filename: The name of the file to append to
 * @text_content: A NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fileDesc;

	if (filename == NULL)
		return (-1);

	fileDesc = open(filename, O_APPEND | O_WRONLY);

	if (fileDesc == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	if (write(fileDesc, text_content, _strlen(text_content)) < 0)
		return (-1);

	close(fileDesc);
	return (1);
}
