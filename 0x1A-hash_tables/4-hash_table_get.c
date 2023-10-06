#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: Hash table.
 * @key: The Key.
 * Return: To element value, otherwise NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp_node = NULL;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[index];

	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
			return (tmp_node->value);
		tmp_node = tmp_node->next;
	}

	return (NULL);
}
