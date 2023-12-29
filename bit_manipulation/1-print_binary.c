#include "main.h"
#include <stdio.h>

/**
* print_binary - function that prints the binary representation of a number.
* @n: Is a variable of type unsigned long int.
*
*/

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}
	while (i <= n)
	{
		i = i << 1;
	}
	i = i >> 1;
	while (i > 0)
	{
		if (n & i)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		i = i >> 1;
	}
}
