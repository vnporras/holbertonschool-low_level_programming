#include "main.h"

/**
 * rev_string - this is a function
 * @s: Declaration.
 * Return: Description of the returned value
 */

void rev_string(char *s)
{
	int i = 0;
	int j, rev;

	for (i = 0; s[i] != '\0'; i++);
		
	for (j = 0; j < i / 2; j++)
	{
		rev = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = rev;
	}
}
