#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read a text file and print it
 * @filename: the name of the file
 * @letters: the number of charactere read
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r_bytes, w_bytes;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	r_bytes = read(fd, buffer, letters);
	if (r_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	w_bytes = write(STDOUT_FILENO, buffer, r_bytes);
	if (w_bytes == -1 || w_bytes != r_bytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	free(buffer);
	return (w_bytes);
}
