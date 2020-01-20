#include "hash_tables.h"

/**
 *  free_recursively - Function that fees a linked list of hash nodes
 *
 *  @node: is the head of the linked list
 *  Return: No return (Void function)
 */
void free_recursively(hash_node_t *node)
{
	if (node)
	{
		free_recursively(node->next);
		free(node->key);
		free(node->value);
		free(node);
	}
}

/**
 * hash_table_delete - Function that deletes a hash table
 *
 * @ht: Pointer to the hash table
 * Return: No return (Void Function)
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	size_t size;

	if (ht)
	{
		for (size = 0; size < ht->size; size++)
		{
			node = ht->array[size];
			free_recursively(node);
		}
		free(ht->array);
		free(ht);
	}
}
