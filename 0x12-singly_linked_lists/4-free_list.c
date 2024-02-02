#include "lists.h"
/**
 * free_list - function that frees all list_t
 * @head: heade of node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
