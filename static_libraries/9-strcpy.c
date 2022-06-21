#include "main.h"
#include <stdio.h>
/**
 * _strcpy - funcion que copie el contenido de un puntero a otro puntero
 *
 * @dest: variable string que recibe datos
 * @src: variable string que envia datos
 *Return: puntero dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}
