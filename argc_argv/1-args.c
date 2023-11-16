#include <stdio.h>

/**
 * main - This is an argc and argv function.
 * @argc: Is a count argument.
 * @argv: Is a argument.
 * Return: Description of the returned value
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc-1);
	return (0);
}
