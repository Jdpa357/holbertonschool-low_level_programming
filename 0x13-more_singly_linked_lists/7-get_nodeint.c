#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns a node in a given position of a
 * linked list
 *
 * @head: First element of the linked list
 * @index: Position of the node desired
 * Return: The node at the given position by "@index"
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *tmp = NULL;
	unsigned int count;

	if (head == NULL)
		return (NULL);

	node = head;
	for (count = 0; count < index; count++)
	{
		node = node->next;
	}

	return (node);
}
