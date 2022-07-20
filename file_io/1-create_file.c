#include "main.h"
/**
*create_file - function that create a file
*@filename: name of file
*@text_content:content of file
*Return: 1
*/
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1 || !filename)
		return (-1);
	while (text_content[count])
	{
	count++;
	}
	write(fd, text_content, count);
	close(fd);
	return (1);
}
