#include "main.h"
/**
*set_bit - function
*@n: value of bit
*@index: position of bite
*Return: 1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = (1 << index), cp = *n;

	if (n)
	{
		if (index <= 64)
		{
			*n = num | cp;
			return (1);
		}
	}
	return (-1);
}
