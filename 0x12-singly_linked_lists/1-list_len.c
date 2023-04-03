#include <stdlib.h>
#include "lists.h"


/**
* list_len - a program to check list length
*
* @h :  a pointer to list_t list.

* Return : element count in list_t
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);




}
