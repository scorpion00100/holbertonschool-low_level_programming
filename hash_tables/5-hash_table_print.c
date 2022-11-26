#include "hash_tables.h"

/**
 *  hash_table_print - Print a hash table
 * @ht: Hash table to print
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t d = 0;
	hash_node_t *tmp = NULL, *tmp1 = NULL;

	if (!ht)
		return;
	printf("{");
	for (; d < ht->size; d++)
	{
		for (tmp = ht->array[d]; tmp; tmp = tmp->next)
		{
			if (tmp1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp1 = tmp;
		}
	}
	printf("}\n");
}
