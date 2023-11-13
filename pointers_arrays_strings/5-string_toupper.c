#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - Function
 * @a: Source pointer.
 * @n: Size.
 * Return: Description of the returned value.
 */

char *string_toupper(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}
