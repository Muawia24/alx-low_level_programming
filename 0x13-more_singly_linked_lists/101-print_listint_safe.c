#include "lists.h"
/**
 * free_safe - frees linked list
 * @head: head of list
 * Return: nothing
 */
void free_safe(listf_t **head)
{
	listf_t *current, *temp;

	if (head != NULL)
	{
		current = *head;
		temp = current;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head of list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	listf_t *h, *new, *add;

	h = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listf_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)head;
		new->next = h;
		h = new;
		add = h;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_safe(&h);
				return (i);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	free_safe(&h);
	return (i);
}
