#include "hash_tables.h"
/**
 * hash_table_set - Setting new element to hash table.
 * @ht: The hash table
 * @key: Key.
 * @value: The key value.
 * Return: 1 on success, otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

hash_node_t *node;
hash_node_t *new_node;
unsigned long int index;

if (ht == NULL || *key == '\n' || *value == '\n')
	return (0);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

if (node == NULL)
{
	new_node = create_new_node(key, value);
	if (new_node == NULL)
		return (0);

	ht->array[index] = new_node;
	return (1);
}

while (node != NULL)
{
	if (strcmp(key, node->key) == 0)
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}
	node = node->next;
}
new_node = create_new_node(key, value);
if (new_node == NULL)
	return (0);

new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}

/**
 * create_new_node -Creates a new node.
 * @key: Key.
 * @value: The key value.
 * Return: 1 on success, otherwise 0.
 */

hash_node_t *create_new_node (const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}
