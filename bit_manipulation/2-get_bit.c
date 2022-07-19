#include "main.h"
/**
*get_bit - function
*@n: value of bit
*@index:bite position
*Return:position in a bait
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < 64)
		return ((n & (1 << index)) >> index);
	else
		return (-1);
}
