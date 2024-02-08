#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of a list
 *
 * Return: numbers of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of list
 * @idx: index where new node shoul be inserted
 * @n: newnode data
 * Return: address of new node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;
	unsigned int i = 0;

	new->n = n;

	if (new == NULL || idx > listint_len(*head))
	{
		free(new);
		return (NULL);
	}

	while (i < idx - 1)
	{
		i++;
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
