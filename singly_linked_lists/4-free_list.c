#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* free_list -  function that adds a new node at the end of a list_t list.
* @head: Is a poniter of pointer.
*/

void free_list(list_t *head)
{
	list_t *frees;

	while (head == NULL)
	{
		frees = head;
		head = head->next;
		free(frees->str);
		free(frees);
	}
}
