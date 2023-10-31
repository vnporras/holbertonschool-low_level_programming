#include <stdio.h>
/**
 * main - This is the main function for 4-print_alphabet.c.
 * Return: Description of the returned value
 */
int main(void)
{
char lowercase;
for (lowercase = 'a'; lowercase <= 'z' ; lowercase++)
{
if (lowercase != 'q' && lowercase != 'e')
{
putchar (lowercase);
}
}
putchar ('\n');
return (0);
}
