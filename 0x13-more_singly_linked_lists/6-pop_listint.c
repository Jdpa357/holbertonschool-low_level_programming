#include "lists.h"

/**
 * pop_listint - Function that deleted the head node of a linked list
 *
 * @head: First element of the linked list
 * Return: Data of the deleted node or 0 if the "@head" is empty
 */

int pop_listint(listint_t **head)
{

	listint_t *tmp = NULL;
	int data;

	if ((*head) == NULL)
		return (0);

	tmp = (*head);
	data = tmp->n;
	(*head) = (*head)->next;
	free(tmp);

	return (data);
}
