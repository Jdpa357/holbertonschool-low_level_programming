#include "lists.h"

/**
 * get_dnodeint_at_index - Function that gets the given node of a doubly 
 * linked list
 *
 * @head: A pointer to the first node of the doubly linked list
 * @index: The index of the given node to be returned
 * Return: The given node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	for (count = 0; count < index; count++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
