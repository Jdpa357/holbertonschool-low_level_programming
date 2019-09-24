/**
 * _islower - Returns 1 if the character is a lower case and 0 if its not
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
