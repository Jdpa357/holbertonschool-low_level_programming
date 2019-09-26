/**
 * _isdigit - Checks if a character has a numeral digit within or not
 * @c: Parameter to be tested in the function
 * Return: 1 if it is a digit and 0 if it`s not
 */

int _isdigit(int c)
{

	int result;

	result = (c >= '0' && c <= '9') ? 1 : 0;
	return (result);

}
