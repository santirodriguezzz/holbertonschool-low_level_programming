#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Succes)
 */


int main(void)
{
	char n;
	for (n = 'A'; n <= 'Z'; n++)
	for (n = 'a'; n <= 'z';	n++)
	{
	putchar(n);
	}
	putchar('\n');
return (0);
}
