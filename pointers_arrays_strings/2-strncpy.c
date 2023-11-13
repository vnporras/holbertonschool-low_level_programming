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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		
		for(; i < n; i++)
		{
			dest[i]= '\0';
		}
	}
	return (dest);
}
