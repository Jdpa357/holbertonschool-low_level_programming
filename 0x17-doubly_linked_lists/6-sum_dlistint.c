#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all data in a doubly
 * linked list
 *
 * @head: A pointer to the first node of the doubly linked list
 * Return: The result of the sum of all the data in the doubly linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		total += temp->n;
		temp = temp->next;
	}
	return (total);
}
