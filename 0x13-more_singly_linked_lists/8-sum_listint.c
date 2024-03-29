#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int count = 0;
	listint_t *temp_head = head;

	while (temp_head)
	{
		count += temp_head->n;
		temp_head = temp_head->next;
	}

	return (count);
}
