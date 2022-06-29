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
		printf("Name: %s\n", d->name ? d->name : nil);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : nil);
	}
}
