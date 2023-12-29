#include "main.h"
#include <stdio.h>

/**
* print_binary - function that prints the binary representation of a number.
* @n: Is a variable of type unsigned long int.
*
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 63)
	{
		return (-1);
	}
	i = i << index;
	if ((n & i)== 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
