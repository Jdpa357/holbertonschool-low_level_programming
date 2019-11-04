 #include "lists.h"

/**
 * free_listint2 - Function that frees a linked list and sets its head to NULL
 *
 * @head: linked list to free
 * Return: No return (Void function)
 */

void free_listint2(listint_t **head)
{

	listint_t *last;

	if (head == NULL)
		return;
	last = *head;
	while (last != NULL)
	{
		free(last);
		last = last->next;
	}
	*head = NULL;

}
