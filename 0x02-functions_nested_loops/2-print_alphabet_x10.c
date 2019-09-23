#include <stdio.h>
/**
 * print_alphabet_x10 - Displays the alphabet 10 times in different lines
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alpha;
	int result, i;

	for (i = 0; i < 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
			result += result + alpha;
		}
	putchar('\n');
	}

	return;
}
