#include "main.h"
/**
 * _strlen - this is a function
 * @s: Is a variable.
 * @v: Is a variable.
 * @i: variable.
 */

int _strlen(char *s)
{
	char  v[] = *&s;
	int i;

	for (i = 0; v[i] != '\0'; i++);

	return (i);
}
