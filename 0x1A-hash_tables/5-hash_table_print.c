#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 *
 * @ht: Ponter to the hash table
 * Return: No return (Void function)
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	size_t size = 0, first = 1;

	if (ht)
	{
		printf("{");
		for (size = 0; size < ht->size; size++)
		{
			node = ht->array[size];
			while (node)
			{
				if (first)
					first = 0;
				else
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
		printf("}\n");
	}
}
