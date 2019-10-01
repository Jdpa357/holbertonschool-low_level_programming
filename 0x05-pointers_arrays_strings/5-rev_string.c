/**
 * rev_string - Reverses a string given to the function
 * @s: Value or parameters given to the function
 * Return: No return (Void function)
 */

void rev_string(char *s)
{
	int counter, length, i, n;
	char cpy[500];

	n = 0;
	counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	length = counter;
	for (i = length - 1; i >= 0; i--)
	{
		cpy[n] = s[i];
		n++;
	}
	for (n = 0; n < length; n++)
	{
		s[n] = cpy[n];
	}
}
