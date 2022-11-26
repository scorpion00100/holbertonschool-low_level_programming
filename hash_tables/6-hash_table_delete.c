#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table
 * @ht: Hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int d;
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;

	for (d = 0; d < ht->size; d++)
	{
		if (ht->array[d] != NULL)
		{
			node = ht->array[d];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
