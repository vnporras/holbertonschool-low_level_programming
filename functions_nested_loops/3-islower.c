#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - This is the function.
 * c - Integer that represents a character.
 * Return: Description of the returned value
 */
int _islower(int c)
{
	if (islower(c) == 1)
	{
		return (1);
	}
	return (0);
}
