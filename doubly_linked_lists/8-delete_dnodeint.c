#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* delete_dnodeint_at_index - function that deletes the node at index.
* @head: Is a double poniter.
* @index: Is the index of the node that should be deleted.
* Return: 1 if it succeeded, -1 if it failed.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temporal = *head;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temporal->next;
		if (temporal->next != NULL)
		{
			temporal->next->prev = NULL;
		}
		free(temporal);
		return (1);
	}
	while (i < index)
	{
		if (temporal == NULL)
		{
			return (-1);
		}
		temporal = temporal->next;
		i++;
	}
	if (temporal->next == NULL)
	{
		temporal->prev->next = NULL;
		free(temporal);
		return (1);
	}
	temporal->prev->next = temporal->next;
	temporal->next->prev = temporal->prev;
	free(temporal);
	return (1);
}
