#include <stdio.h>
/**
 * main - This is the main function for 7-print_tebahpla.c.
 * Return: Description of the returned value
 */
int main(void)
{
char reverse;
for (reverse = 'z'; reverse >= 'a' ; reverse--)
{
putchar (reverse);
reverse--;
}
putchar ('\n');
return (0);
}
