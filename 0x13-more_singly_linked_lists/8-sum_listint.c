#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data in a linked list
 *
 * @head: Fist element of the singly linked list
 * Return: The sum of all the data in the singly linked list
 */

int sum_listint(listint_t *head)
{

	listint_t *tmp = NULL;
	int result = 0;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp != NULL)
	{
		result += tmp->n;
		tmp = tmp->next;
	}

	return (result);

}
