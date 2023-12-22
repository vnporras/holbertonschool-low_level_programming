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
	dlistint_t *temporal = *h;
	unsigned int i = 0;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}
	while (i < idx - 1)
	{
		if (temporal == NULL)
		{
			free(newNode);
			return (NULL);
		}
		temporal = temporal->next;
		i++;
	}
	newNode->next = temporal->next;
	newNode->prev = temporal;
	temporal->next = newNode;
	return (newNode);
}
