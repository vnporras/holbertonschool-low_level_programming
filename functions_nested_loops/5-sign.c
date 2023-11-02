#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - This is the function.
 * @c: Integer that represents a character.
 * Return: Description of the returned value
 */
int print_sign(int n)
{
	if (n > 0 )
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
