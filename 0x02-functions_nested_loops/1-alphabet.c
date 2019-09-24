#include <stdio.h>
/**
 * print_alphabet - Prints the alphabet in lower case on one line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha;
	int result;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
		result += result + alpha;
	}
	_putchar('\n');

	return;
}
