#include <stdio.h>
#include "main.h"

/**
 * _abs - This is the function.
 * @n:parameter.
 * Return: Description of the returned value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
