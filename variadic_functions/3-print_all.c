#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* print_all -function that prints anything.
* @format: Is a list of types of arguments passed to the function.
* Return: Print the strings.
*/

void print_all(const char * const format, ...)
{
	va_list arguments;
	int i = 0;
	char *string;

	va_start(arguments, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arguments, int));
				break;
			case 'i':
				printf("%d", va_arg(arguments, int));
				break;
			case 'f':
				printf("%f", va_arg(arguments, double));
				break;
			case 's':
				string = va_arg(arguments, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arguments);
}
