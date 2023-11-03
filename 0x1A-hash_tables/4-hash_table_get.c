#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key.
* @ht: The hash table
* @key: THe key
*
* Return: Value associated with element. Otherwise NULL.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int idx;

	if (!ht || !key || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	current = ht->array[idx];
	while (current && strcmp(current->key, key) != 0)
		current = current->next;

	return ((!current) ? NULL : current->value);
}
