#include "lists.h"
#include <stddef.h>
/**
 * print_list - function that prints all the
 *  elements of a list_t list.
 *  @h: pointer to the head of list
 *  Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *current = h;

	i = 0;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);

		i++
		current = current->next;
	}
	return (i);
}
