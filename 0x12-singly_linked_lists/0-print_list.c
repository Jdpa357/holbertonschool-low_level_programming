#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - Function that prints all the elements of a "list_t" list
 *
 * @h: "list_t" data structure
 * Return: The number of nodes traversed in the function
 */

size_t print_list(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		elem++;
	}

	return (elem);

}
