#include "hash_tables.h"

/**
 * hash_table_delete -Deletting the hash table.
 * @ht: Hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *node;

if (ht == NULL)
	return;

for (i = 0; i < ht->size; i++)
{
	node = ht->array[i];
	free_hash_list(node);
}
free(ht->array);
free(ht);
}


/**
 * free_hash_list -Freeing the list.
 * @head: Head of the list.
 */
void free_hash_list(hash_node_t *head)
{
	hash_node_t *current;
	hash_node_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
}
