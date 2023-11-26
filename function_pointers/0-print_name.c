#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - Is a funtion.e
* @name: parameter pointer.
* @f: a parameter pointer.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
