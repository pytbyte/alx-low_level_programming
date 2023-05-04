#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int unit_storage;

	if (!b)
		return (0);
	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}
	for (i = 0; b[count] != '\0'; count++)
	{
		unit_storage <<= 1;
		if (b[count] == '1')
			unit_storage += 1;
	}
	return (unit_storage);
}
