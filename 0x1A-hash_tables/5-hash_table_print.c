#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table to be printed
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int flag = 0;

	if (ht == NULL)
		return;


	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				node = node->next;

				if (node != NULL)
					printf(", ");
			}

			flag = 1;
		}
	}

	printf("}\n");
}
