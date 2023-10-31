#include <stdio.h>
/**
 * main - This is the main function for 2-print_alphabet.c.
 * Return: Description of the returned value
 */
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar (alphabet);
alphabet++;
}
putchar ('\n');
return (0);
}
