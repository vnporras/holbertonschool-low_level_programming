#include "main.h"

/**
 * rev_string - this is a function
 * @s: Declaration.
 * Return: Description of the returned value
 */

void rev_string(char *s)
{
	int i = 0;
	int v, rev;

	for (i = 0; s [i] != '\0'; i++)
		
	for (v = 0; v < i / 2; v++)
	{
		rev = s [v];
		s[v] = s[i -1 - v];
		s[i - 1 - v] = rev;
	}
}
