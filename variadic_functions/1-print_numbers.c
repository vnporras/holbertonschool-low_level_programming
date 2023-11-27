#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - function that prints numbers..
* @separator: Is the string to be printed between numbers.
* @n: Is the number of integers passed to the function.
* Return: Print the numbers..
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num = 0;
	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arguments, int);
		printf("%d", num);
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arguments);
}
