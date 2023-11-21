#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - This is a function.
 * @s1: Is a pointer.
 * @s2: Is a pointer.
 * @n: Is a parameter.
 * Return: Description of the returned value
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1Copy, s2Copy, s1Size, s2Size;
	char *sum;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	for (s1Size = 0; s1[s1Size] != '\0'; s1Size++)
		;
	for (s2Size = 0; s2[s2Size] != '\0'; s2Size++)
		;
	if (n >= s2Size)
	{
		n = s2Size;
	}
	sum = malloc(sizeof(char) * (s1Size + n + 1));
	if (sum == NULL)
	{
		return (NULL);
	}
	for (s1Copy = 0; s1Copy < s1Size; s1Copy++)
	{
		sum[s1Copy] = s1[s1Copy];
	}
	for (s2Copy = 0; s2Copy < n; s2Copy++)
	{
		sum[s1Copy + s2Copy] = s2[s2Copy];
	}
	sum[s1Copy + s2Copy] = '\0';
	return (sum);
}
