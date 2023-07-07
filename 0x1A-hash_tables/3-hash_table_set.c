#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table
 *                  managing collisions via linked list.
 * @ht: The hash table to add/update the key-value pair.
 * @key: The key to add/update.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int target_index;
	hash_node_t *new_node, *temp_hold;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	target_index = key_index((const unsigned char *)key, ht->size);
	temp_hold = ht->array[target_index];

	for (; temp_hold != NULL; temp_hold = temp_hold->next)
	{
		if (strcmp(temp_hold->key, key) == 0)
		{
			free(temp_hold->value);
			temp_hold->value = strdup(value);
			if (temp_hold->value == NULL)
				return (0);
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[target_index];
	ht->array[target_index] = new_node;

	return (1);
}
