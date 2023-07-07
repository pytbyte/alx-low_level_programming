#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: hash table to delete from
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp_node, *previous_node;
	unsigned long int target_node, present_nodes;

	for (target_node = 0; target_node < ht->size; target_node++)
	{
		present_nodes = 0;
		temp_node = (ht->array)[target_node];
		while (temp_node)
		{
			present_nodes = 1;
			previous_node = temp_node;
			temp_node = temp_node->next;
			free(previous_node->key);
			free(previous_node->value);
			free(previous_node);
		}
		if (!present_nodes)
			free((ht->array)[target_node]);
	}
	free(ht->array);
	free(ht);
}
