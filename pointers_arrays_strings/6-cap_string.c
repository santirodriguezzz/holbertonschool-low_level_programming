#include "main.h"
/**
 * cap_string - funcion que escribe string en mayuscula
 * @i: variable string
 * Return: string en mayuscula
 */
char *cap_string(char *i)
{
	int x;

	for (x = 0; i[x]; x++)
	{
		if (x == 0 && i[x] != '\0' && i[x] >= 97 && i[x] <= 122)
		{
			i[0] -= 32;
		}
		else if (i[x] >= 97 && i[x] <= 122)
		{
			if (i[x - 1] == ',' || i[x - 1] == ';' ||
				i[x - 1] == '.' || i[x - 1] == '!' ||
				i[x - 1] == '?' || i[x - 1] == '"' ||
				i[x - 1] == '(' || i[x - 1] == ')' ||
				i[x - 1] == '{' || i[x - 1] == '}' ||
				i[x - 1] == ' ' || i[x - 1] == '\t' ||
				i[x - 1] == '\n')
			{
				i[x] -= 32;
			}
		}
	}
	return (i);
}
