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
	int size, i;

	for (size = 0; src[size] != '\0'; size++)
		;
		
	for(i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[size]= '\0';
	return (dest);
}
