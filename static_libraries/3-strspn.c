#include "main.h"
/**
 * _strspn - fiuncion que calcula el largo de una string
 * @s: string.
 * @accept: resultado
 * Return: numero de bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x;
	unsigned int rbytes = 0; /* important to start it at 0 */

	for (i = 0; i <= 5; i++)
	{
		for (x = 0; accept[x]; x++) /* did it with for 'cause of the x = 0 part. */
		{
			if (s[i] == accept[x])
			{
				rbytes++;
			}
		}
	}
	return (rbytes);
}
