#include "lists.h"
/**
 * listint_len - count the number of nodes in linked list
 * @h: head of list
 * Return: number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
