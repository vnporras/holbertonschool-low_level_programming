#include <stdio.h>
/**
 * main - This is the main function for 8-print_base16.c.
 * Return: Description of the returned value
 */
int main(void)
{
char number;
int lowercase;
for (number = 0; number <= 10; number++)
{
putchar(number + '0');
}
for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
{
putchar(lowercase);
}
putchar('\n');
return (0);
}
