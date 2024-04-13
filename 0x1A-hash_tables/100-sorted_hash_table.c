#include "hash_tables.h"
/**
 * shash_table_create - creates a hash table
 * @size: size of table
 * Return:  a pointer to the newly created hash table
 * Otherwise NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;

	shash_table_t *table = malloc(sizeof(shash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	table->array = malloc(sizeof(shash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
/**
 * shash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: key can not be an empty string
 * @value:value must be duplicated
 * Return:1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *val_dup;
	unsigned long int index;
	shash_node_t *new, *temp;

	if (key == NULL || ht == NULL || value == NULL || *key == '\0')
		return (0);

	val_dup = strdup(value);
	if (val_dup == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = val_dup;
			return (1);
		}
		temp = temp->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
	{
		free(val_dup);
		return (0);
	}

	new->value = val_dup;
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(val_dup);
		free(new);
		return (0);
	}

	new->next = ht->array[index];
	ht->array[index] = new;

	temp = ht->shead;
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}

	else if (strcmp(temp->key, key) > 0)
	{
		new->snext = ht->shead;
		new->sprev = NULL;
		ht->shead->sprev = new;
		ht->shead = new;
	}

	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
		{
			temp = temp->snext;
		}
		new->snext = temp->snext;
		new->sprev = temp;

		if (temp->snext == NULL)
			ht->stail = new;
		else
			temp->snext->sprev = new;

		temp->snext = new;
	}

	return (1);
}
/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht:  hash table you want to look into
 * @key: the key you are looking for
 * Return: value associated with the element, or NULL
 *  if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];

	while (node && strcmp(node->key, key) != 0)
	{
		node = node->snext;
	}

	if (node != NULL)
		return (node->value);
	else
		return (NULL);

}
/**
 * shash_table_print - prints sorted hash table.
 * @ht: the hash table to be printed
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node)
			printf(", ");

	}

	printf("}\n");
}
/**
 * shash_table_print_rev - prints sorted hash table in reverse
 * @ht: the hash table to be printed
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->stail;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;

		if (node != NULL)
			printf(", ");
	}

	printf("}\n");
}
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}

	free(head->array);
	free(head);
}
