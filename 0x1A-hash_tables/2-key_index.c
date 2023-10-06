#include "hash_tables.h"

/**
 * key_index -Returning key index.
 * @key: Key
 * @size: Size of hash.
 * Return: Returns to index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
