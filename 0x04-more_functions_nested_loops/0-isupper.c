/**
 * _isupper - Checks if a character is Uppercase or not
 * @c: Parameter to be tested in function
 * Return: 1 if its an uppercase character and 0 if its not.
 */

int _isupper(int c)
{
	int result;

	result = (c >= 'A' && c <= 'Z') ? 1 : 0;
	return (result);
}
