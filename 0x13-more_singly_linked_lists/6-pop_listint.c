#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: head of list
 * Return:he head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int i = (*head)->n;
	listint_t *temp = *head;

	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (i);


}
