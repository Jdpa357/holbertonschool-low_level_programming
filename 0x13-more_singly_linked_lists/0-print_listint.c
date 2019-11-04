#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Function that prints all the elements of a linked list
 *
 * @h: Parameter of type listint_s
 * Return: The number of nodes in the linked list given
 */

size_t print_listint(const listint_t *h)
{

	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);

}
