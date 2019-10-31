#include "lists.h"

/**
 * free_list - Function that frees a linked list
 *
 * @head: linked list to free
 * Return: No return (Void function)
 */

void free_list(list_t *head)
{

	list_t *last;

	while (head != NULL)
	{
		last = head->next;
		free(head->str);
		free(head);
		head = last;
	}

}
