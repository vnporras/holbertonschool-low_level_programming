#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - this is a function
 * @s: Pointer Declaration.
 * @accept: Pointer Declaration.
 * Return: Description of the returned value
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
