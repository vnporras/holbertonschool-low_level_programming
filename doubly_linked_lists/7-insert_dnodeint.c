#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* insert_dnodeint_at_index - function that inserts a new node.
* @h: Is a duble poniter.
* @idx: Is the index of the list where the new node should be added.
* @n: Is an integer.
* Return: the address of the new node, or NULL if it failed.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (i < idx - 1)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next->prev = newNode;
	temp->next = newNode;
	return (newNode);
}
