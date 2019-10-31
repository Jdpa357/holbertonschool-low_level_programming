#include "lists.h"
#include <string.h>

/**
 * add_node_end - Function that adds a new node at the end of a linked list
 *
 * @head: Structure of type list_t
 * @str: String parameter to be added to structure
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	unsigned int len;
	list_t *newest, *last;

	newest = malloc(sizeof(list_t));

	if (newest == NULL)
		return (NULL);
	if (str != NULL)
	{
		for (len = 0; str && str[len]; len++)
			;
		newest->str = strdup(str);
	}
	newest->len = len;
	newest->next = NULL;

	if (*head == NULL)
	{
		*head = newest;
		return (newest);
	}
	last = *head;

	while (last->next != NULL)
		last = last->next;

	last->next = newest;
	return (*head);
}
