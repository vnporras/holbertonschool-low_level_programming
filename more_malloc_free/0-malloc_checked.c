#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - This is a function.
 * @b: Is argument.
 * Return: Description of the returned value
 */

void *malloc_checked(unsigned int b)
{
	void *newPointer;

	newPointer = malloc(b);

	if (newPointer == NULL)
	{
		exit(98);
	}
	return (newPointer);
}
