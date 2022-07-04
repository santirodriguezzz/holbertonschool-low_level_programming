#include "variadic_functions.h"
/**
* print_all - muestra string
* @format: string
*
*/
void print_all(const char * const format, ...)
{
	va_list a;
	int lenf, x = 0;
	char *y;

	va_start(a, format);
	if (format)
	{
		lenf = strlen(format);
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%c", va_arg(a, int));
					break;
				case 'i':
					printf("%d", va_arg(a, int));
					break;
				case 'f':
					printf("%f", va_arg(a, double));
					break;
				case 's':
					y = (va_arg(a, char *));
					(y == NULL ? printf("(nil)") : printf("%s", y));
					break;
			}
			if (x < lenf - 1 && (format[x] == 'c' || format[x] == 'i' ||
			format[x] == 'f' || format[x] == 's'))
			printf(", ");
			x++;

		}
	}
	va_end(a);
	printf("\n");
}
