#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to decimal targeted
 * @index: index position targeted
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int temp_store;

	if (index > 64)
		return (-1);
	temp_store = index;
	for (i = 1; temp_store > 0; i *= 2, temp_store--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
