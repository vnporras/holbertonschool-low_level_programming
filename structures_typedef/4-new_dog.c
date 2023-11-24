#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * *new_dog - Is a name pointer function.
  * @name: Is a name to dog.
  * @age: Is an age to dog.
  * @owner: Is a pointer to owner.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int nameSize, nameCopy, ownerSize, ownerCopy;
	
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (nameSize = 0; name[nameSize] != '\0'; nameSize++)
		;
	new_dog->name = malloc(sizeof(char) * (nameSize + 1));
	if (new_dog->name == NULL)
	{
		return (NULL);
	}
	for (nameCopy = 0; nameCopy <= nameSize; nameCopy++)
	{
		new_dog->name[nameCopy] = name[nameCopy];
	}
	for (ownerSize = 0; owner[ownerSize] != '\0'; ownerSize++)
		;
	new_dog->owner = malloc(sizeof(char) * (ownerSize + 1));
	if (new_dog->owner == NULL)
	{
		return (NULL);
	}
	for (ownerCopy = 0; ownerCopy <= ownerSize; ownerCopy++)
	{
		new_dog->owner[ownerCopy] = owner[ownerCopy];
	}
	new_dog->age = age;
	return (new_dog);
}
