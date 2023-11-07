#include "main.h"
/**
 * _strlen - this is a function
 * @s: Is a variable.
 * Return: Description of the returned value
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
