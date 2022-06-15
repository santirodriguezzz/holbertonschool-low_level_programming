#include "main.h"
/**
 * _puts - funcion que imprime string segido de nueva linea
 * @str: variable
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar (str[i]);
	_putchar('\n');
}
