#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - create a text file
 * @filename: the name of the file
 * @text_content: a string to put in the file
 * Return: 1 succes or -1 fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, y, bytes = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[bytes] != '\0')
		{
			bytes++;
		}
		y = write(fd, text_content, bytes);
		if (y == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
