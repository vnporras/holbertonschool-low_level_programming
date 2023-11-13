#include "main.h"
#include <stdio.h>

/**
 * *cap_string - Function
 * @n: Source pointer.
 * Return: Description of the returned value.
 */

char *cap_string(char *n)
{
	int i = 0;
	int j = 0;
	char sep[] = " \t\n,;.!?\"(){}";
	int sep_len = 13;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			if (i == 0)
			{
				n[i] = n[i] - 32;
			}
			else
			{
				for (j = 0; j < sep_len; j++)
				{
					if (n[i - 1] == sep[j])
					{
						n[i] = n[i] - 32;
					}
				}
			}
		}
		i++;
	}
	return (n);
}

