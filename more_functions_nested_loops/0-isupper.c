 #include "main.h"
/**
 * _isupper - funcion para verificar el caracter en mayusculas
 * @c: letra
 * Return: 1 si c es mayuscula
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
