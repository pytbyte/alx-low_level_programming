#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @head: A pointer to the first node.
 *
 * Return: The size of the freed node.
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *current_node = *head;
	listint_t *next;
	size_t node_count = 0;

	while (current_node != NULL)
	{
		next = current_node->next;
		free(current_node);
		node_count++;
		current_node = next;

		if (current_node == *head)
		{
			*head = NULL;
			return (0);
		}
	}

	return (node_count);
}
