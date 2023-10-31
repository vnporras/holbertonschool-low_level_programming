#include <stdio.h>
/**
 * main - This is the main function for 3-print_alphabet.c.
 * Return: Description of the returned value
 */
int main(void)
{
char lowercase = 'a';
char uppercase = 'A';
while (lowercase <= 'z')
{
putchar (lowercase);
lowercase++;
}
while (uppercase <= 'Z')
{
putchar (uppercase);
uppercase++;
}
putchar ('\n');
return (0);
}
