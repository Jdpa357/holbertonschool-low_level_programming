/*
 * _isalpha - Returns 1 if character is an alphabet and 0 if its not
 */
int _isalpha(int c)
{
	int result;

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))
	{
	result = 1;
	return(result);
	}
	else
	{
	result = 0;
	return(result);
	}
}
