#include "dog.h"
#include <stddef.h>
/**
* init_dog - initialize a variable struct dog
* @name: name of the dog
* @age: age
* @owner: owner
* @d : dog
*Return: dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
