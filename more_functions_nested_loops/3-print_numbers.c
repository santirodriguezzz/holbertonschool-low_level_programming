#include "main.h"
/**
* print_numbers - funcion que imprime numeros del 0 a 9 seguido de nueva linea*
* Return: numero
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar (i + 48);
	}
	_putchar(10);
}
