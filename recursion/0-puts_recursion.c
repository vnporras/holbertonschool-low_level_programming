#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - check the code
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
