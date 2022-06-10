#include "main.h"
/**
 * print_last_digit - funcion para imprimir el ultimo digito de un numero
 * @n: numero x
 * Return: ultimo digito del numero
 */
int print_last_digit(int n)
{
	int resultado = n % 10;

	if (resultado >= 0)
	{
		_putchar(resultado + '0');
		return (resultado);
	}
	else
	{
		_putchar(-resultado + '0');
		return (-resultado);
	}
}
