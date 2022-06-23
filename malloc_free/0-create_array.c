#include "main.h"
#include <stdlib.h>
/**
* *create_array - función que cree una array de caracteres y la inicialice
*@size: valores de array
*@c:contenido de cada valor de array
*Return: array1
*/
char *create_array(unsigned int size, char c)
{
	char *array1;
	unsigned int i;

	if (size == '\0')
	{
		return (NULL);
	}

	array1 = malloc(size * sizeof(char));

	if (array1 == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		array1[i] = c;
	if (array1)
		return (array1);
	else
		return ('\0');
}
