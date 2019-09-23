/*
 * _isalpha - Returns 1 if character is an alphabet and 0 if its not
 */
int _isalpha(int c)
{
	int result;

	result = isalpha(c);
	if (result > 0)
	{
	return(1);
	}
	else
	{
	return(0);
	}
}
