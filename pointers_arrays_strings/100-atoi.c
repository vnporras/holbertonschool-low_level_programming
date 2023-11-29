#include "main.h"
#include <stdio.h>

/**
 * _atoi - this is a function
 * @s: Pointer.
 * Return: Description of the returned value.
 */

int _atoi(char *s)
{
	unsigned int i, size, result;
	int sing;
	
	sign = 1;
	result = 0;

	for (size = 0; s[size] != '\0'; size++)
		;

	for (i = 0; i < size; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		if (s[i] == ';')
		{
			break;
		}
	}
	return (result * sign);
}