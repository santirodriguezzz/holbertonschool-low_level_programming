#include "main.h"
/**
 * puts2 - funcion que muestra los caracteres desde el principio uno si uno no
 *
 * @str: variable
 */
void puts2(char *str)
{
	int i, x;

	for (x = 0; str[x] != '\0'; x++)
	{}
	for (i = 0; i < x; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
