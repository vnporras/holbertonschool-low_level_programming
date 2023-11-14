#include "main.h"
#include <stdio.h>

/**
 * _strspn - Function
 * @s: Pointer destination.
 * @accept: Pointer.
 * Return: Description of the returned value.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
			}
			j++;
		}
		i++;
	}
	return (k);
}

