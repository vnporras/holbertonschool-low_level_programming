#include "main.h"

/**
 * print_rev - this is a function
 * @s: String to be printed.
 * @i: Is a variable.
 * @v: Is a variable.
 * Return: Description of the returned value
 */

void print_rev(char *s)
{
	int i = 0;
	int v;

	while (s[i] != '\0')
	{
		i++;
	}
	for (v = (i - 1); v >= 0; v--)
	{
		_putchar(s[v]);
	}
	_putchar('\n');
}
