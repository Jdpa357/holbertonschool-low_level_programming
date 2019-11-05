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

	if (head == NULL || *head == NULL)
		return (NULL);

	start = *head;
	rest = start->next;
	if (rest == NULL)
		return (NULL);
	reverse_listint(&rest);

	start->next->next = start;
	start->next = NULL;

	*head = rest;

	return (*head);
}
