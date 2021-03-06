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

	if (head == NULL)
		return (NULL);

	newest = malloc(sizeof(listint_t));
	if (newest == NULL)
		return (NULL);

	newest->n = n;
	current = *head;
	if (idx == 0)
	{
		newest->next = *head;
		*head = newest;
		return (newest);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		current = current->next;
		if (current == NULL)
		{
			free(newest);
			return (NULL);
		}
	}
	newest->next = current->next;
	current->next = newest;

	return (newest);

}
