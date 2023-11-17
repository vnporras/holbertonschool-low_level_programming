#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - This is an argc and argv function.
 * @s1: Is a pointer.
 * @s2: Is a pointer
 * Return: Description of the returned value
 */

char *str_concat(char *s1, char *s2)
{
	int s1Copy, s2Copy, s1Size, s2Size;
	char *sum;

	if (s1 == NULL)
	{
		return (s1 = "");
	}
	if (s2 == NULL)
	{
		return (s2 = "");
	}
	for (s1Size = 0; s1[s1Size] != '\0'; s1Size++)
		;
	for (s2Size = 0; s2[s2Size] != '\0'; s2Size++)
		;
	sum = malloc(sizeof(char) * (s1Size + s2Size + 1));

	if (sum == NULL)
	{
		return (NULL);
	}
	for (s1Copy = 0; s1Copy < s1Size; s1Copy++)
	{
		sum[s1Copy] = s1[s1Copy];
	}
	for (s2Copy = 0; s2Copy < s2Size; s2Copy++)
	{
		sum[s1Copy + s2Copy] = s2[s2Copy];
	}
	sum[s1Copy + s2Copy] = '\0';
	return (sum);
}
