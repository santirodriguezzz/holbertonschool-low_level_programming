#include "main.h"
/**
 * rev_string - funcion que invierte una string
 *
 * @s: varieble
 *
 */
void rev_string(char *s)
{
	int i, j;
	char z;

	if (!s)
	{
		return;
	}
	for (i = 0; s[i] != '\0'; i++)
	{}
	for  (j = 0, i = i - 1; j < i; j++, i--)
	{
		z = s[j];
		s[j] = s[i];
		s[i] = z;
	}
}
