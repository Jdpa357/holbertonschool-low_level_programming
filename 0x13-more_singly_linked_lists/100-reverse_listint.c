#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list of type listint_t
 *
 * @head: Pointer to first element of linked list
 * Return: A pointer to the first node of the reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *start, *rest;

	if (*head != NULL && (*head)->next != NULL)
	{
		start = *head;
		rest = (*head)->next;
		(*head)->next = NULL;
		*head = rest;
		while ((*head)->next != NULL)
		{
			rest = (*head)->next;
			(*head)->next = start;
			start = *head;
			(*head) = rest;
		}
		(*head)->next = start;
	}

	return (*head);
}
