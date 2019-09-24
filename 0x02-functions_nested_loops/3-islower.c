/**
 * _islower - Returns 1 if the character is a lower case and 0 if its not
 * @c: the character to be evaluated by the function
 * Return: 1 if the value is lowercase and 0 if otherwise
 */
int _islower(int c)
{
	int result;

	if ((c >= 'a') && (c <= 'z'))
	{
		result = 1;
		return (result);
	}
	else
		result = 0;
		return (result);
}
