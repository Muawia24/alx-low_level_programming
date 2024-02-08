#include "lists.h"
/**
 *  add_nodeint_end - adds a new node at the end of
 *  a listint_t list.
 *  @head: head of list
 *  @n: node data
 *  Return: address of the new element or null.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;

	return (new);

}
