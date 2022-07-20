#include "main.h"
/**
*
*
*
*
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 0, y = 0;

	while (y != 64)
	{
		if ((n & 1) != (m & 1))
			num++;
		n >>= 1;
		m >>= 1;
		y++;
	}
	return (num);
}
