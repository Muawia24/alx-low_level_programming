#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 *  of a dlistint_t list.
 *  @head: head of list
 *  @n: data input
 *  Return: the address of the new element, or
 *   NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tail = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (*head != NULL)
	{
		while (tail->next != NULL)
			tail = tail->next;
	}

	new->n = n;
	new->next = NULL;
	new->prev = tail;

	if (tail != NULL)
		tail->next = new;

	tail = new;
	if (*head == NULL)
		*head = new;

	return (new);

}
