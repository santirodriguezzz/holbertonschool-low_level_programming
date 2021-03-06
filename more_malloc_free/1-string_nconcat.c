#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*string_nconcat - funcion  que concatena 2 string
* @s1: string 1 a concatenar
* @s2: string 2 a concatenar
* @n: num de bytes para copiar a s2
* Return: puntero a nueva array de s1 + n bytes de s2
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int larg, i, j;

	larg = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (strlen(s1) > 0)
		larg += strlen(s1);
	if (strlen(s2) > 0)
	{
		if (n > strlen(s2))
			larg += strlen(s2);
		else
			larg += n;
	}
	larg++;
	array = malloc(larg * sizeof(char) + 5);
	if (array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (strlen(s1) > 0 || s1 != NULL)
		for (; s1[i]; i++)
			array[i] = s1[i];
	if (strlen(s2) > 0 || s2 != NULL)
	{
		if (n > strlen(s2))
			for (; s2[j]; i++, j++)
				array[i] = s2[j];
		else
			for (; j < n; i++, j++)
				array[i] = s2[j];
	}
	array[i] = '\0';
	return (array);
}
