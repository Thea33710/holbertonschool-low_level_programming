#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - add text to a file
 * @filename: the name of the file
 * @text_content: a string to put in the file
 * Return: 1 succes or -1 fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, y, count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[count] != '\0')
	{
		count++;
	}
	y = write(fd, text_content, count);
	if (y == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
