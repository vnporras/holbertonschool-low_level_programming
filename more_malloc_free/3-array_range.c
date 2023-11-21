#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *array_range - This is a function.
 * @min: Is a parameter.
 * @max: Is a parameter.
 * Return: Description of the returned value
 */

int *array_range(int min, int max)
{
	int *newPointer;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	newPointer = malloc(sizeof(int) * size);
	if (newPointer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		newPointer[i] = min;
		min++;
	}
	return (newPointer);
}
