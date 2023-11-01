#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - This is the main function for 2-print_alphabet_x10.c.
 * Return: Description of the returned value
 */
void print_alphabet_x10(void)
{
	char l;
	int alpha;

	for (alpha = 0; alpha < 10; alpha++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
