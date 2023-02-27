#include "main.h"

/**
 *swap_int - Swaps the values of two ints
 *@a: First number
 *@b: Second number
 *
 *Return: Void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
