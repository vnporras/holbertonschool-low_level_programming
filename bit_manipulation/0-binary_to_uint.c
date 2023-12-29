#include "main.h"
#include <stdio.h>

/**
* binary_to_uint - Function that converts a binary number to an unsigned int.
* @b: Is pointing to a string of 0 and 1 chars.
*
* Return: the converted number or 0 if fail.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		number <<= 1;
		if (b[i] == '1')
		{
			number += 1;
		}
		i++;
	}
	return (number);
}

