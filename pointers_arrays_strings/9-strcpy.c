#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - this is a function
 * @dest: Pointer destination.
 * @src: Source pointer.
 * Return: Description of the returned value.
 */

char *_strcpy(char *dest, char *src)
{
	int size, i;

	for (size = 0; src[size] != '\0'; size++)
		;
	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
	dest[size] = '\0';

	return (dest);
}
