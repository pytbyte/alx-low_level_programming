#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key from array.
 * @key: target key.
 * @size: hash table array size.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashed_value, chamber_index;

	hashed_value = hash_djb2(key);
	chamber_index = hashed_value % size;

	return (chamber_index);
}
