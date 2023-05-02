#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list.
 * @head: pointer to the first node 
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_node = NULL;
	const listint_t *last_node = NULL;
	size_t count = 0;
	size_t new_node;

	temp_node = head;
	while (temp_node)
	{
		printf("[%p] %d\n", (void *)temp_node, temp_node->n);
		count++;
		temp_node = temp_node->next;
		last_node = head;
		new_node = 0;
		while (new_node < count)
		{
			if (temp_node == last_node)
			{
				printf("-> [%p] %d\n", (void *)temp_node, temp_node->n);
				return (count);
			}
			last_node = last_node->next;
			new_node++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}