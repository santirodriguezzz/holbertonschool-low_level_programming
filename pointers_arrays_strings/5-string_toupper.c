#include "main.h"
/**
 * string_toupper - funcion que invierte una string
 * @s: varieble
 * Return: s
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] <= 122 && s[i] >= 97)
			s[i] -= 32;
		i++;
	}
	return (s);
}

