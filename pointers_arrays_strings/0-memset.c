#include "main.h"
#include <stdio.h>

/**
 * *_memset - Function
 * @s: Pointer destination.
 * @b: Character.
 * @n: Character.
 * Return: Description of the returned value.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
