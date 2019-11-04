#include "lists.h"

/**
 * free_listint - Function that frees a linked list
 *
 * @head: linked list to free
 * Return: No return (Void function)
 */

void free_listint(listint_t *head)
{

	listint_t *last;

	while (head != NULL)
	{
		last = head->next;
		free(head);
		head = last;
	}
}
