#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* list_len -  name the function of return the number of elements.
* @h: Is a poniter of list.
* Return:  the number of nodes.
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
