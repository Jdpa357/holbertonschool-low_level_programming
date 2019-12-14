#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the beginning of a doubly
 * linked list
 * @head: A pointer to the first node of the doubly linked list
 * @n: The data in the new node to be inserted
 *
 * Return: Pointer to the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
