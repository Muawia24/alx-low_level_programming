#include "lists.h"
/**
 * free_listint_safe -  frees a listint_t list.
 * @h: head of list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listf_t *ptr, *new, *add;
	listint_t *current;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listf_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;
		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_safe(&ptr);
				return (i);
			}
		}
		current = *h;
		*h = (*h)->next;
		free(current);
		i++;
	}
	*h = NULL;
	free_safe(&ptr);
	return (i);
}
