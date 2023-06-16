#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head node in the list
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_finder, *fast_finder;

	if (!head || !head->next)
		return (NULL);

	slow_finder = fast_finder = head;

	while (fast_finder && fast_finder->next)
	{
		slow_finder = slow_finder->next;
		fast_finder = fast_finder->next->next;

		if (slow_finder == fast_finder)
		{
			slow_finder = head;

			while (slow_finder != fast_finder)
			{
				slow_finder = slow_finder->next;
				fast_finder = fast_finder->next;
			}

			return (slow_finder);
		}
	}

	return (NULL);
}
