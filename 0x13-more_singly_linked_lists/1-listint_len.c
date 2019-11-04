#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked list
 *
 * @h: Parameter of type listint_s
 * Return: The number of elements in the linked list given
 */

size_t listint_len(const listint_t *h)
{

	size_t elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}

	return (elem);

}
