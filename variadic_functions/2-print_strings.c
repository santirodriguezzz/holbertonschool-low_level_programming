#include "variadic_functions.h"
/**
* print_strings - muestra string
* @separator: string
* @n: numero arg
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	char *arg;

	va_start(ap, n);
	for (x = 0; x < n; x++)
	{
		arg = va_arg(ap, char*);
		if (arg == NULL)
			printf("(nil)");
		else
			printf("%s", arg);
		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
