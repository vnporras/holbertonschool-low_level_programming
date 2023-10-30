#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is the main function for 0-positive_or_negative.c.
 * Return: Description of the returned value
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is Zero\n", n);
}
return (0);
}
