#include "main.h"
/**
 * _pow_recursion -función que devuelva el valor de x elevado a la potencia de y.
 * @x: string 
 * @y: potencia 
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
	return  (_pow_recursion(x, y - 1) * x);
	}
	if (y == 0)
	{
	return (1);
	}	
	return (-1);
}

