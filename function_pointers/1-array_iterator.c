#include "function_pointers.h"
#include <stdio.h>
/**
* array_iterator - Is a funtion.
* @array: Is array pointer.
* @size: Is a size of array pointer.
* @action: Is a pointer.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
