#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* sum_dlistint - function that returns the sum of all the data (n).
* @head: Is a poniter.
* Return: return the sum..
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
