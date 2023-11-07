#include "main.h"
/**
 * _strlen - this is a function
 * @s: Is a variable.
 * @v: Is a variable.
 * @v2: variable.
 */

int _strlen(char *s)
{
	char  v[] = *&s;
	int i;

	for (i = 0; v[i] != '\0'; i++);

	return (v2);
}
