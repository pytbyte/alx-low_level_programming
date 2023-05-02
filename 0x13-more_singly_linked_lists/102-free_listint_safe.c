#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: A pointer to the first node.
 *
 * Return: The number of freed nodes.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current_node, *next_node;

	if (!h || !*h)
		return (0);

	current_node = *h;
	while (current_node)
	{
		next_node = current_node->next;
		free(current_node);
		count++;
		if (next_node >= current_node)
			break;
		current_node = next_node;
	}

	*h = NULL;
}
