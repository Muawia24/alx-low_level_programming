#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 *  of a listint_t linked list.
 *  @head: head of list
 *  @index: index of node to be deleted
 *  Return: 1 or -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (i != index)
		{
			previous = current;
			current = current->next;
			i++;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
