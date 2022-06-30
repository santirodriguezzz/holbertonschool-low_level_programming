#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - muestra nombre
* @name: nombre persona
* @f: valor puntero
*/
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
