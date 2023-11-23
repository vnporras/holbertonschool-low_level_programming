#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * init_dog - Is a function.
  * @d: Is a pointer.
  * @name: Is a name to dog.
  * @age: Is an age to dog..
  * @owner: Is a pointer to owner.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
