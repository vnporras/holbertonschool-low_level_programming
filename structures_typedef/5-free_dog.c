#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * free_dog - Is a name pointer function.
  * @d: Is a pointer.
  * Return: new_dog is the required value.
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
