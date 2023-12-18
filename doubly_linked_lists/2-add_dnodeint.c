#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_dnodeint - function that adds a new node at the beginning.
* @head: Is a poniter.
* @n: Is a integer.
* Return:  the new elements or NULL..
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;
	return (newNode);
}
