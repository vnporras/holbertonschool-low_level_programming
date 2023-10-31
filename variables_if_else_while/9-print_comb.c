#include <stdio.h>
/**
 * main - This is the main function for 9-print_comb.c.
 * Return: Description of the returned value
 */
int main(void)
{
int comb;
for (comb = 0; comb <= 9; comb++)
{
putchar(comb + '0');
if (comb == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
