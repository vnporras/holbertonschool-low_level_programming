#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* print_strings -function that prints strings..
* @separator: Is the string to be printed between strings.
* @n: Is the number of strings passed to the function.
* Return: Print the strings.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char *);
		if (string == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", string);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
