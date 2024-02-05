#include "search_algos.h"


/**
 * binary_search - function that searches for a value in a sorted array..
 * @array: is a pointer to the first element of the array.
 * @size: is the number of elements in array.
 * @value:  is the value to search.
 * Return: return the index where the value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle_array;
	size_t i;
	size_t index_left = 0;
	size_t index_right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (index_left <= index_right)
	{
		printf("Searching in array: ");
		for (i = index_left; i <= index_right; i++)
		{
			if (i == index_right)
			{
			printf("%d\n", array[i]);
			}
			else
			{
			printf("%d, ", array[i]);
			}
		}
		middle_array = (index_left + index_right) / 2;
		if (array[middle_array] < value)
		{
			index_left = middle_array + 1;
		}
		else if (array[middle_array] > value)
		{
			index_right = middle_array - 1;
		}
		else
		{
			return (middle_array);
		}
	}
	return (-1);
}
