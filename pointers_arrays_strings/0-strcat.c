#include "main.h"
#include <stdio.h>

/**
 * *_strcat - this is a function
 * @dest: Pointer destination.
 * @src: Source pointer.
 * Return: Description of the returned value.
 */

char *_strcat(char *dest, char *src)
{
	int s1, s2;

	for (s1 = 0; dest[s1] != '\0'; s1++)
		;

	for (s2 = 0; src[s2] != '\0'; s2++)
	{
		dest[s1] = src[s2];

		s1++;
	}
	return (dest);
}
