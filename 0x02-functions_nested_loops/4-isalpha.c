#include "holberton.h"
/**
 * _isalpha - evaluates if character is an alphabet or if its not
 * @c: Character passed to function in order to be evaluated
 * Return: return 1 if its alphabet character and 0 if its not
 */
int _isalpha(int c)
{
	int result;

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		result = 1;
		return (result);
	}
	else
	{
		result = 0;
		return (result);
	}
}
