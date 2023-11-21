#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - This is a function.
 * @size: This is the size of elements.
 * @nmemb: Is a parameter.
 * Return: Description of the returned value
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newPointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	newPointer = malloc(nmemb * size);
	if (newPointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		newPointer[i] = 0;
	}
	return (newPointer);
}
