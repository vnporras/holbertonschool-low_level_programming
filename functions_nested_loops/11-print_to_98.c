#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - This is a funcion.
  * @n: Integer that represents a character
  *
  * Return: Description of the returned value
  */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			} else
			{
				printf("%d, ", n);
			}
		}
	} else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			} else
			{
				printf("%d, ", n);
			}
		}
	}
}
