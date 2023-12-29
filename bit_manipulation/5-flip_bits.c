#include "main.h"
#include <stdio.h>

/**
* flip_bits - function that returns the number of bits.
* @n: Is a variable.
* @m: Is a variable.
* Return: returns the number of bits you would need to flip to get
* from one number to another.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int stateX = n ^ m;

	while (stateX > 0)
	{
		if (stateX & 1)
		{
			count++;
		}
		stateX >>= 1;
	}
	return (count);
}
