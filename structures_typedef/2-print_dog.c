#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - funcion perros
* @d: puntero para funcion
*/

void print_dog(struct dog *d)
{
	char *nil = "(nil)";

	if (d)
	{
		printf("name: %s\n", d->name ? d->owner : nil);
		printf("age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : nil);
	}
}
