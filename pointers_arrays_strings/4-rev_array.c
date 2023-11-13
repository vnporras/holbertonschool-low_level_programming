#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Function
 * @a: Source pointer.
 * @n: Size.
 * Return: Description of the returned value.
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
