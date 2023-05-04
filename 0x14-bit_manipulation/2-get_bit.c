#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to retrieve the bit from
 * @index: The index of the bit to retrieve
 *
 * Return: The value of the bit at the index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Step 1: Check if the index is within the valid range. */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Step 2: Shift 1 to the left by the index to create a mask. */
	unsigned long int mask = 1 << index;

	/**
     * Step 3: AND the mask with the number to get the value of
     * the bit at the index.
     */
	unsigned long int bit = n & mask;

	/* Step 4: If the value is 0 or 1, return it. Otherwise, return -1. */
	if (bit)
		return (1);
	else
		return (0);
}
