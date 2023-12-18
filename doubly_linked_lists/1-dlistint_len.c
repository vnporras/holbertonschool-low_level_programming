#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* dlistint_len -  .function that returns the number of elements in a linked dlistint_t list.
* @h: Is a poniter.
* Return:  the number of nodes.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while(h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
