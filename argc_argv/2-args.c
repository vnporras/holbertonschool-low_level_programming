#include <stdio.h>

/**
 * main - This is an argc and argv function.
 * @argc: Is a count argument.
 * @argv: Is a argument.
 * Return: Description of the returned value
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
