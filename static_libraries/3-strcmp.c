#include "main.h"
/**
 * _strcmp - funcion que compara vos string
 * @s1: variable string 1
 * @s2: variable string 2
 *Return: retorna 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
