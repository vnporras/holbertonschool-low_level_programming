#include "main.h"
#include <stdio.h>

/**
 * print_array - this is a function
 * @a: Declaration.
 * @n: Declaration.
 * Return: Description of the returned value
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
