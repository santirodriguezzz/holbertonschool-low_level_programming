#include "main.h"
/**
 *  _strlen - funcion que muestre la longitud de string
 *  @s: variable string
 *  Return: largo del string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * puts_half - funcion que imprima la mitad de una cadena + \n
 *
 * @str: variable string
 */
void puts_half(char *str)
{
	int n, l;

	l = _strlen(str);
	if (l % 2 != 0)
		l++;
	for (n = l / 2; str[n] != '\0'; n++)

	{
		_putchar (str[n]);
	}
		_putchar ('\n');

}
