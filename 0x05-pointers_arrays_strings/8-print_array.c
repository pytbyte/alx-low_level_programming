#include "main.h"

/**
 * print_array - prints items in arrayintegers.
 * @a: input array.
 * @n: input n elements
 * Return: no null.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
