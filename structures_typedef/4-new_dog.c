#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* new_dog - crea nuevo perro
* @name: nombre perro
* @age: edad perro
* @owner: duenio perro
* Return: perro
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cafu;
	unsigned int x;
	int largn, largo;

	largn = strlen(name);
	largo = strlen(owner);
	cafu = malloc(sizeof(dog_t));
	if (cafu == NULL)
		return (NULL);
	cafu->name = malloc(largn + 1);
	if (cafu->name == NULL)
	{
		free(cafu);
		free(cafu->name);
		return (NULL);
	}
	cafu->owner = malloc(largo + 1);
	if (cafu->owner == NULL)
	{
		free(cafu);
		free(cafu->name);
		free(cafu->owner);
		return (NULL);
	}
	for (x = 0; x < strlen(name); x++)
		cafu->name[x] = name[x];
	cafu->name[x] = '\0';
	cafu->age = age;
	for (x = 0; x < strlen(owner); x++)
		cafu->owner[x] = owner[x];
	cafu->owner[x] = '\0';
	return (cafu);
}
