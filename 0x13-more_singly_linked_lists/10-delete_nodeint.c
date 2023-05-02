#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of
 * a listint_t linked list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_head = *head;
	listint_t *current_node = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_head);
		return (1);
	}

	while (count < index - 1)
	{
		if (!temp_head || !(temp_head->next))
			return (-1);
		temp_head = temp_head->next;
		count++;
	}

	current_node = temp_head->next;
	temp_head->next = current_node->next;
	free(current_node);

	return (1);
}
