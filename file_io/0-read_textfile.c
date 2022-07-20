#include "main.h"
/**
*read_textfile - function that print a text file
*@filename: name of text
*@letters: letters of text
*Return: text
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, count = 0;
	char *buff;

	buff = malloc(letters * sizeof(char));
	fd = open(filename, O_RDONLY);

	if (fd == -1 || !buff)
		return (0);
	read(fd, buff, letters);
	buff[letters] = '\0';
	while (buff[count])
	{
	count++;
	}
	close(fd);

	write(STDOUT_FILENO, buff, count);
	return (count);
}
