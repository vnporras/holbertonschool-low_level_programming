#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* print_list -  name the function of print all elements.
* @h: Is a poniter of list.
* Return:  the number of nodes.
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
