#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - This is an argc and argv function.
 * @size: size of type.
 * @c: Is a type.
 * Return: Description of the returned value
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(sizeof(char) * size);

	if (a == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
