#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - This is the function.
 * @c: Integer that represents a character.
 * Return: Description of the returned value
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
