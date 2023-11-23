#ifndef DOG_H
#define DOG_H

/**
* struct dog - Is an alias.
* @name: Is a name.
* @age: Is an age.
* @owner: Is an owner.
*
* Description: This is a structor, include name, age and owner..
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
