#include <stdio.h>
#include "holberton.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 90;
        b = -971;
        c = 972;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
