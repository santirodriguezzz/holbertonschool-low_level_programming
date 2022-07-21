#include "main.h"

/**
*append_text_to_file - function that appends text at the end of a file.
*@filename: name of a file
*@text_content: content of file in text
*Return: 1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	while (text_content && text_content[count])
		count++;
	write(fd, text_content, count);
	return (1);
}
