#include "hash_tables.h"

/**
 * hash_table_set - add an element to a hash table
 * @ht: hash table where  update the key/value
 * @key: key value into an index
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int d, index;
	hash_node_t *new_node;

	if (!ht || !key || !(*key) || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (d = index; ht->array[d]; ++d)
	{
		if (strcmp(ht->array[d]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[d]->value = strdup(value);
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
		return (0);

	new_node->value = strdup(value);
	if (new_node->value == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
