#include "main.h"
/**
 * _puts - debe escribir la cadena a la que apunta s , seguida de una \n
 *@s: string
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar('\n');

	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
