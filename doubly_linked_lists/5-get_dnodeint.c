#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* get_dnodeint_at_index - function that returns the nth node.
* @head: Is a poniter.
* @index: Is a integer.
* Return: if the node does not exist, return NULL.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
