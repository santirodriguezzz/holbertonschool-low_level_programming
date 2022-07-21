#include "main.h"
/**
*main - function
*@argc: amount
*@argv: contents
*Return: 99, 98, 100
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to ");
		exit(97);
	}
	cpt(argv[1], argv[2]);
	exit(0);
}
/**
*cpt - function
*@ctrlC: copy
*@ctrlV: paste
*/
void cpt(const char *ctrlC, const char *ctrlV)
{
	int fileC, fileV, readM, writeM;
	char *count[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fileC =  open(ctrlC, O_RDONLY);
	if (fileC == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ctrlC), exit(98);

	fileV = open(ctrlV, O_CREAT | O_TRUNC | O_WRONLY, mode);
	if (fileV == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ctrlV), exit(99);
	readM = read(fileC, count, 1024);
	if (readM == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", ctrlC), exit(98);
	writeM = write(fileV, count, readM);
	if (writeM == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", ctrlV), exit(99);
	if (close(fileV) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileC), exit(100);
	if (close(fileC) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileV), exit(100);
}

