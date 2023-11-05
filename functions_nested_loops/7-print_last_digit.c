#include <stdio.h>
#include "main.h"
#include <time.h>
/**
* print_last_digit - This is the function.
* @n:parameter.
* Return: Description of the returned value
*/

int print_last_digit(int n)
{
	int ld;
	
	ld = n % 10;
	
	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');
	return(ld);
}
