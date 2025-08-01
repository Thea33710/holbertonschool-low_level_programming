#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * erreur_exit - Affiche un message d'erreur stderr et quitte avec un code
 * @code: code de sortie
 * @format: format du message
 * @arg: argument du message
 */

void erreur_exit(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}

/**
 * main - Fonction principale
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 * Return: 0 en cas de succes, sinon exit avec les codes specifies
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_r, bytes_w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		erreur_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		erreur_exit(99, "Error: Can't write to %s\n", argv[2]);
	}
	while ((bytes_r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_w = write(fd_to, buffer, bytes_r);
		if (bytes_w != bytes_r)
		{
			close(fd_from);
			close(fd_to);
			erreur_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (bytes_r == -1)
	{
		close(fd_from);
		close(fd_to);
		erreur_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(fd_from) == -1)
		erreur_exit(100, "Error: Can't close fd %d\n", argv[1]);
	if (close(fd_to) == -1)
		erreur_exit(100, "Error: Can't close fd %d\n", argv[2]);
	return (0);
}
