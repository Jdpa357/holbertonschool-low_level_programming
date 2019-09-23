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
		putchar(alpha);
		result += result + alpha;
	}
	putchar('\n');

	return;
}
