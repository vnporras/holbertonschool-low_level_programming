#include "function_pointers.h"
#include <stdio.h>
/**
* int_index - Is a funtion.
* @array: Is array pointer.
* @size: Is a size of array pointer.
* @cmp: Is a function pointer.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
