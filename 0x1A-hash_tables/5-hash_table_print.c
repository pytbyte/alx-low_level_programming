#include "hash_tables.h"

/**
 * hash_table_print -  a hash table.
 * @ht: The hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp_node;
	unsigned long int target_index;
	int x, x_hash;

	if (ht == NULL)
		return;
	printf("{");
	x_hash = 1;
	for (target_index = 0; target_index < ht->size; target_index++)
	{
		if ((ht->array)[target_index] == NULL)
			continue;
		if (!x_hash)
			printf(", ");
		temp_node = (ht->array)[target_index];
		x = 1;
		while (temp_node)
		{
			if (!x)
				printf(", ");
			printf("\'%s\': \'%s\'", temp_node->key,
					temp_node->value);
			x = 0;
			temp_node = temp_node->next;
		}
		temp_node = NULL;
		x_hash = 0;
	}
	printf("}\n");
}
