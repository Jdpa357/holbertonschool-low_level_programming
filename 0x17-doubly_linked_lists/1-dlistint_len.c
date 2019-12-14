#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements in a doubly
 * linked list of type dlistint_t
 *
 * @h: The first node of the doubly linked list
 * Return: Number of elements in the doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
