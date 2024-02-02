#include "lists.h"
/**
 *  add_node -  function that adds a new node at
 *  the beginning of a list_t list.
 *  @head: head of the node
 *  @str: data of new node
 *  Return: the address of the new element, or
 *   NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int i;

	if (new_node == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
