#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves the value associated with a key
 *
 * @ht: Pointer to the hash table
 * @key: Pointer to the key we are looking for
 * Return: The value associated with the element, or NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (!ht || !key)
		return (0);
	node = ht->array[key_index((const unsigned char *) key, ht->size)];

	while (node)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
