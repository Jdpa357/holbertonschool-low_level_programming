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
int _islower(int c)
{
	int result;
	result = islower(c);
	if (result > 0)
	{
		result = 1;
		return result;
	}
	else
		result = 0;
		return result;
}

int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}
