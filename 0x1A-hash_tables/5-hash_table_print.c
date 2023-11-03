#include "hash_tables.h"

/**
* hash_table_print - prints a hash table.
* @ht: The hash table
*
* Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *sep = "";

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		for (node = ht->array[i]; node; node = node->next)
		{
			printf("%s'%s': '%s'", sep, node->key, node->value);
			sep = ", ";
		}
	}
	printf("}\n");
}
