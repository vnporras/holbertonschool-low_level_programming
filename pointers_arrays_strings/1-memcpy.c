#include "main.h"
#include <stdio.h>

/**
 * *_memcpy - Function
 * @dest: Pointer destination.
 * @src: Source pointer..
 * @n: Character.
 * Return: Description of the returned value.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
