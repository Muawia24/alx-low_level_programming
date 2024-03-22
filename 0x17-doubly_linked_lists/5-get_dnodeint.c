#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of
 *  a dlistint_t linked list.
 *  @head: head of list
 *  @index: index of node in the list
 *  Return: addres of nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		if (head->next)
		{
			head = head->next;
			i++;
		}
		else
		{
			return (NULL);
		}

	}

	return (head);
}
