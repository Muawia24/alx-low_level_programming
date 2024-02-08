#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: head of list
 * Return:he head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp = *head;

	if (temp == NULL)
		return (0);

	*head = (*head)->next;
	i = temp->n;
	free(temp);
	temp = NULL;

	return (i);


}
