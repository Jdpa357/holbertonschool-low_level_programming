#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes a node at a given position
 *
 * @head: A pointer to the first element of the linked list
 * @index: Position to delete the node at
 * Return: 1 if success or -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *tmp, *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp != NULL && i < (index - 1); i++)
	{
		tmp = tmp->next;
	}
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	next = tmp->next->next;
	free(tmp->next);
	tmp->next = next;

	return (1);

}
