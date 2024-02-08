#include "lists.h"
/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: head of list
 * Return: The address of the node where the loop starts
 * or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hptr;
	listint_t *fast;

	hptr = head;
	fast = head;

	while (head && fast && fast->next)
	{
		head = head->next;
		fast = fast->next->next;

		if (head == fast)
		{
			head = hptr;
			hptr = fast;

			while (1)
			{
				fast = hptr;
				while (fast->next != head && fast->next != hptr)
				{
					fast = fast->next;
				}

				if (fast->next == head)
					break;

				head = head->next;
			}
			return (fast->next);
		}
	}
	return (NULL);
}
