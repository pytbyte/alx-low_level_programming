#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed
 *
 * Return: no return value (void)
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp_store = n;
	int bounce = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	for (; (temp_store >>= 1) > 0; bounce++)
		;

	for (; bounce >= 0; bounce--)
	{
		if ((n >> bounce) & 1)
			putchar('1');
		else
			putchar('0');
	}
}
