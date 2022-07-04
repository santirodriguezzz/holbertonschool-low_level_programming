#include "variadic_functions.h"

/**
* print_numbers - muestra numeros + \n
* @separator: string para printear
* @n: numero de argumetos
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;

	va_start(ap, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ap, int));
		if (x < n - 1)
			if (separator != NULL)
				printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
