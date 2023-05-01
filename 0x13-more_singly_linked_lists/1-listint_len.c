#include "lists.h"

/**
 * listint_len - prints all the elements of a linked list
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
