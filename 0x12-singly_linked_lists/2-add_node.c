#include "lists.h"
#include <string.h>

/**
 * add_node - Function that adds a new node at the beginning of a linked list
 *
 * @head: New node to be added to the linked list
 * @str: Parameter that the new node will have inside the linked list
 * Return: Address of the newest element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{

	int len = 0;
	list_t *newest;

	newest = malloc(sizeof(list_t));

	if (newest == NULL)
		return (NULL);
	if (str != NULL)
	{
		for (len = 0; str && str[len]; len++)
			;
		newest->str = strdup(str);
	}
	else
	{
		newest->str = NULL;
	}
	newest->len = len;
	newest->next = *head;
	*head = newest;

	return (newest);
}
