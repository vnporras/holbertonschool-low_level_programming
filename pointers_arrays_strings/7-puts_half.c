#include "main.h"

/**
 * puts_half - this is a function
 * @str: Declaration.
 * Return: Description of the returned value
 */

void puts_half(char *str)
{
	int i, v, size;
	size = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	if (size % 2 == 0)
	{
		for (v = size / 2; v < size; v++)
		{
			_putchar(str[v]);
		}
	}
	else
	{
		for (v = (size - 1) / 2; v < size; v++)
		{
			_putchar(str[v]);
		}
	}
	_putchar('\n');
}
