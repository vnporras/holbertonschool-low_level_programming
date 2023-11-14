#include "main.h"
#include <stdio.h>

/**
 * *_strchr - Function
 * @s: Pointer destination.
 * @c: Character.
 * Return: Description of the returned value.
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (j <= i)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
		j++;
	}
	return (0);
}
