#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			node = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = node;
		}
	}

	free(ht->array);
	free(ht);
}
