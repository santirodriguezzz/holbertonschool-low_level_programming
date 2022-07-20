#include "main.h"
/**
*clear_bit -
*@n:
*@index:
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n)
	{
		if (index <= 64)
		{
			*n &= -(1 << index);
			return (1);
		}
	}
	return (-1);
}
