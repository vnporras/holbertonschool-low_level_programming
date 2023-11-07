#include "main.h"
/**
 * _puts - this is a function
 * Return: Description of the returned value
 */

void _puts(char *str)
{
	while (*str != '\0') 
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
