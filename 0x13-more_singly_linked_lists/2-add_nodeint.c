#include "lists.h"
#include <string.h>

/**
 * add_nodeint - Function that adds a new node at the beginning of a linked
 * list
 *
 * @head: New node to be added to the linked list
 * @n: Parameter that the new node will have inside the linked list
 * Return: Address of the newest element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *newest;

	newest = malloc(sizeof(listint_t));

	if (newest == NULL)
		return (NULL);
	if (n != '\0')
	{
		newest->n = n;
	}
	newest->next = *head;
	*head = newest;

	return (newest);

}
