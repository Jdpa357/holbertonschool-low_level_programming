#include "lists.h"

/**
 * list_len - Function that return the number of elements in a linked list
 *
 * @h: structur of type "list_t"
 * Return: Number of elements on a given linked list
 */

size_t list_len(const list_t *h)
{

	size_t elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}

	return (elem);
}
