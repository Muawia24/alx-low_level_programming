#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head of list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, n = head->n;
	void *p = &n;

	while (head != NULL)
	{
		printf("[%p] %ld\n", p, n);
		i++;
		head = head->next;
	}
	return (i);
}
