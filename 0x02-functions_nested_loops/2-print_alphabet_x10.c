#include <stdio.h>
/**
 * print_alphabet - Entry point
 * Return: Always 0 (Success)
 */
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
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
