#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *node = h;

	i = 0;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		i++;
		node = node->next;
	}

	return (i);
}
