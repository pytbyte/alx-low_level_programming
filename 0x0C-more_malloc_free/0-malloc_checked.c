#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - delegates memory using malloc
 * @b: number of bytes  delegated
 *
 * Return: a pointer to the delegated  memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (ptr);
}
