#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int counted, weight;
	int count;

	if (b == NULL)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}

	for (weight = 1, counted = 0, count--; count >= 0; count--, weight *= 2)
	{
		if (b[count] == '1')
			counted += weight;
	}

	return (counted);
}
