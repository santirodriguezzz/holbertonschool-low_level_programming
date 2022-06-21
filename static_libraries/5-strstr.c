#include "main.h"
#include <stdio.h>
/**
* _strstr - encuentra la condicion
* @needle: substring a encontrar
* @haystack: string para comprobar
* Return: puntero
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (NULL);
}
