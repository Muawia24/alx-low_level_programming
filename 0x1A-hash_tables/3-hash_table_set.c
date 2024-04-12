#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: key can not be an empty string
 * @value:value must be duplicated
 * Return:1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val_dup;
	unsigned long int index, i;
	hash_node_t *new;

	if (key == NULL || ht == NULL || value == NULL || *key == '\0')
		return (0);

	val_dup = strdup(value);
	if (val_dup == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			ht->array[i]->value = val_dup;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val_dup);
		return (0);
	}

	new->value = val_dup;
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}

	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);

}
