#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * print_dog - Is a function.
  * @d: Is a pointer.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		if (d->name == NULL)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%s\n", d->name);
		}
		if (d->owner == NULL)
		{
			 printf("(nil)\n");
		}
		else
		{
			 printf("%s\n", d->owner);
		}
		printf("%f\n", d->age);
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
