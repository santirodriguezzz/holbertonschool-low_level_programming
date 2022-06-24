#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*str_concat - funcion que concatena 2 strings
*@s1: string
*@s2: string
*Return: array
*/
char *str_concat(char *s1, char *s2)
{	char *array;
	int larg = 0, x, y;

	if (s1 != NULL && s2 == NULL)
		larg = strlen(s1);
	if (s2 != NULL && s1 == NULL)
		larg = strlen(s2);
	if (s1 != NULL && s2 != NULL)
	{
		larg = strlen(s1);
		larg += strlen(s2);
	}
	array = malloc(larg * sizeof(char) + 1);
	if (array == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (x = 0; s1[x]; x++)
			array[x] = s1[x];
	}
	if (s2 != NULL)
	{
		for (y = 0; s2[y]; y++, x++)
			array[x] = s2[y];
	}
	return (array);
}
