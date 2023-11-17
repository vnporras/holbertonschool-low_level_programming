#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - This is an argc and argv function.
 * @str: Is a pointer..
 * Return: Description of the returned value
 */

char *_strdup(char *str)
{
	char *strCopy;
	int strSize = 0, count;

	strCopy = malloc(sizeof(char) * strSize + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (strCopy == NULL)
	{
		return (NULL);
	}
	for (strSize = 0; str[strSize] != '\0'; strSize++)
		;
	for (count = 0; count < strSize; count++)
	{
		strCopy[count] = str[count];
	}
	return (strCopy);
}
