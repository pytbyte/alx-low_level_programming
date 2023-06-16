#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: first node in target list
 */
void free_list(list_t *head)
{
	list_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head->str);
		free(head);
		head = temp_node;
	}
}
