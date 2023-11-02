#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - This is the function.
 * @n: Integer that represents a character.
 * Return: Description of the returned value
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
