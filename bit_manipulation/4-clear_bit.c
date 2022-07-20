#include "main.h"
/**
*clear_bit - function
*@n: value of array
*@index: position of array
*Return: suces
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n)
	{
		if (index <= 63)
		{
			*n &= -(1 << index);
			return (1);
		}
	}
	return (-1);
}
