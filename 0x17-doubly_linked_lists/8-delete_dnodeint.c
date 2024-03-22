#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of
 *  a dlistint_t linked list.
 *  @head: head of list
 *  @index: index of list to be deleted
 *  Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1 = *head;
	/*dlistint_t *temp2;*/

	if (*head == NULL )
		return (-1);

	while (index != 0)
	{
		if (temp1 == NULL)
			return (-1);
		index--;
		temp1 = temp1->next;
	}

	if (temp1 == *head)
	{
		*head = temp1->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp1->prev->next = temp1->next;
		if (temp1->next != NULL)
			temp1->next->prev = temp1->prev;
	}
	free(temp1);
	temp1 = NULL;

	return (1);

}
