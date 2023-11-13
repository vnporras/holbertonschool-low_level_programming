#include "main.h"
#include <stdio.h>

/**
 * *leet - Function
 * @n: Source pointer.
 * @9i: Variable.
 * @j: Variable..
 * Return: Description of the returned value.
 */

char *leet(char *n)
{
	int i, j;
	char *s = "aAeEoOtTlL";
	char *s1 = "4433007711";
	
	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (n[i] == s[j])
			{
				n[i] = s1[j];
			}
		}
	}
	return (n);
}
