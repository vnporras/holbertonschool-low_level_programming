#include <stdio.h>
#include "main.h"
/**
 * factorial - check the code
 *@n: Is character.
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
