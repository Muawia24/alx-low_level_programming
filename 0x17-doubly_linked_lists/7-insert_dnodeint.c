#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at
 *  a given position.
 *  @h: head of list
 *  @idx: index of new node insertion
 *  @n: data of new node
 *  Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i = 0;

	while (i < idx - 1 && current != NULL)
	{
		if (current->next != NULL)
		{
			current = current->next;
			i++;
		}
		else
			return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next->prev = new;
	current->next = new;

	return (new);
}
