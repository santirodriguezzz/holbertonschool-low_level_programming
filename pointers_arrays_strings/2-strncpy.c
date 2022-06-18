#include "main.h"
/**
 * _strncpy - funcion que copia dos string
 * @dest:variable string
 * @src:variable string
 * @n:variable cantidad de largo a copiar
 *Return: devuelve dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest[0] != '\0' && src[i] != '\0')
	{

		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
		for ( ; i < n; i++)
			dest[i] = '\0';
	}
		return (dest);
}
