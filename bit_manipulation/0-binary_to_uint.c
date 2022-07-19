#include "main.h"
/**
*binary_to_uint - function
*@b: aray
*Return: num
*
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (!b)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		num <<= 1;
		num += b[i] - '0';
		i++;
	}
	if (b[i] != '\0')
		return (0);
	return (num);
}
