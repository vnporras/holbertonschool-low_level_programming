#include <stdio.h>
#include <stdlib.h>
/**
 * main - This is an argc and argv function.
 * @argc: Is a count argument.
 * @argv: Is a argument.
 * Return: Description of the returned value
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	return (0);
}
