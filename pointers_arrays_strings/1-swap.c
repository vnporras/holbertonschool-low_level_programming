#include "main.h"
/**
 * swap_int - this is a function
 * @a: Is a variable.
 * @b: Is a variable.
 */

void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
