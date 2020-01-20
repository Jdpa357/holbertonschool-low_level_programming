#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table
 *
 * @ht: Pointer to the hash table
 * @key: Pointer to the key that will be added to the hash table
 * @value: Pointer to the value corresponding to the key
 * Return: 1 if success, 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *node = NULL;
	unsigned long int idx;

	if (!ht || !key || !value)
		return (0);

	idx = key_index((unsigned char *) key, ht->size);
	node =  ht->array[idx];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (!node->value)
				return (0);
			return (1);
		}
		node = node->next;
	}

	new_node = malloc(sizeof(new_node));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
		return (0);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
