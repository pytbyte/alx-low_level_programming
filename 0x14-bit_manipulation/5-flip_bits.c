#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: first number
 * @m: second number
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp_store;
	int count;

	temp_store = n ^ m;
	count = 0;

	while (temp_store)
	{
		count++;
		temp_store &= (temp_store - 1);
	}

	return (count);
}
