#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table to be printed
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] && flag == 1)
			printf(", ");
		if (ht->array[i])
		{
			printf("%s: %s", ht->array[i]->key, ht->array[i]->value);

			flag = 1;
		}
	}

	printf("}\n");
}
