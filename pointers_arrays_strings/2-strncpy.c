#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - Function
 * @dest: Pointer destination.
 * @src: Source pointer.
 * @n: Character.
 * Return: Description of the returned value.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int size = 0;

	for (; src[size] != '\0' && size < n; size++)
	{
		dest[size] = src[size];
	}
	if (size < n)
	{
		dest[size] = '\0';
	}
	return (dest);
}
