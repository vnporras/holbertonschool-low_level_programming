#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Function
 * @s1: Source pointer.
 * @s2: Source pointer
 * Return: Description of the returned value.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if ((s1[i] - s2[i]) != 0)
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
