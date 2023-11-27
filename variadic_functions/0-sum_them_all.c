#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - returns the sum  of all its parameters.
* @n: Is a parameter.
* Return: The sum of parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list arguments;
		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			int newVariable = va_arg(arguments, int);
			sum += newVariable;
		}
		va_end(arguments);
	}
	return (sum);
}
