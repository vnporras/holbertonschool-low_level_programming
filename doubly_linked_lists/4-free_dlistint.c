#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* free_dlistint - function that free of nodes.
* @head: Is a poniter.
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *frees = NULL;

	while (head != NULL)
	{
		frees = head;
		head = head->next;
		free(frees);
	}
}
