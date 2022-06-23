#include "main.h"
#include <stdlib.h>
/**
* _strdup - funcio que copia 2 string en un array
*@str:string a copiar
*Return: array
*/
char *_strdup(char *str)
{
	int i, larg;
	char *array;

	if (str == NULL)
		return (NULL);
	for (larg = 0; str[larg]; larg++)
	{}
	larg++;
	array = malloc(larg * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < larg; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
