#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node at a given
 * position
 *
 * @head: A pointer to the first element of the linked list
 * @idx: Position to add the new node to
 * @n: The data to insert in the new node
 * Return: The address of the new node inserted or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *newest;
	listint_t *current;
	unsigned int i;

	newest = malloc(sizeof(listint_t));
	current = *head;

	if (newest == NULL || *head == NULL)
		return (NULL);
	newest->n = n;
	for (i = 0; i < (idx - 1); i++)
	{
		current = current->next;
	}
	newest->next = current->next;
	current->next = newest;

	return (newest);

}
