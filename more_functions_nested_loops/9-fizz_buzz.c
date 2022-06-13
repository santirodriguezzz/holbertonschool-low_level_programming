#include "main.h"
#include <stdio.h>
/**
 * main - test fizz buzz
 *
 * Return: 0;
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			putchar(32);
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
			putchar(32);
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			if (i < 100)
			{
				putchar(32);
			}
		}
		else
		{
			printf("%d", i);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
