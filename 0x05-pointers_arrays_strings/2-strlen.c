/**
 * _strlen - Function that displays the length of a string
 * @s: Value passed to the function to process
 * Return: Length of the string expressed in number
 */

int _strlen(char *s)
{

	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
