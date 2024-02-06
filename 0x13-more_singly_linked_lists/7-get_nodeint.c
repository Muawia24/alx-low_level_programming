#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a
 *  listint_t linked list.
 *  @head: head of list
 *  @index: is the index of the node, starting at 0
 *  Return:  the nth node of a listint_t linked list. or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
		i = 0;

		while (i < index)
		{
			head = head->next;
			i++;
		}
		if (i > index)
			return (NULL);
	return (head);
}
