#include <stdio.h>
/**
 * main - muestra el nombre
 * @argv: string que almacena argumentos
 * @argc: unused
 * Return: siempre 0, exito
 */
int main(int argc, char *argv[])
{
	if(argc)
	printf("%s\n", argv[0]);
	return (0);
}
