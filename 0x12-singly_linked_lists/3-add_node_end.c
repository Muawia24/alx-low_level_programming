#include "lists.h"
#include <string.h>
/**
 * add_node_end -  function that adds a new node
 *  at the end of a list_t list.
 *  @head: head of node
 *  @str: node data
 *  Return: the address of the new element, or
 *   NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
