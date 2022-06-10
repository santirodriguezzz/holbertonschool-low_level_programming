#include "main.h"
/**
 *  print_sign - function that prints the sign of a number.
 *  @n: variable that returns the value
 *  Return: if n is greater than zero 1
 *  if is 0 return 0, if  is less than zero -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
