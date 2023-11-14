#include <stdio.h>
#include "main.h"
/**
 * is_prime_number - check the code
 *@n: Is parameter.
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
