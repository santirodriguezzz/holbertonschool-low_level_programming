#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _calloc - funcion que asigna memoria para un array
* @nmemb: numero de elementos
* @size: cantidadde bytes
* Return: puntero al array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (size == 0 || nmemb == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
	return (NULL);
	memset(array, 0, nmemb * size);
	return (array);
}
