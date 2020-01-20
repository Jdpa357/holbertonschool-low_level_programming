#include "hash_tables.h"

/**
 * key_index - Function that returns the index of a key
 *
 * @key: Value to be stored on the array of hash table
 * @size: The size of the array of the hash table
 * Return: Index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	if (size == 0 || key == NULL)
		return (0);

	hash = (hash_djb2(key) % size);

	return (hash);
}
