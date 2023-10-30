#include "main.h"

#define BUFFER_SIZE 1024

void close_file(int fd);
char *creat_buff(char *file_to);

/**
 * close_file - closes the file
 * @fd: the file descriptor to be closed
*/

void close_file(int fd)
{
	int j;

	j = close(fd);

	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * creat_buff - function allocates to a buffer 1024 bytes
 * @file_to: the file into which the buffer will write
 * Return: a pointer to the newly allocated buffer
*/

char *creat_buff(char *file_to)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	return (buff);
}
/**
 * main - copies the content of a file to another
 * @argc: the number of arguments
 * @argv: an array of the elements
 * Return: the copied file
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = creat_buff(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	bytes = read(fd_from, buffer, BUFFER_SIZE);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0666);

	do {
		if (fd_from == -1 || bytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		if (fd_to == -1 || write(fd_to, buffer, bytes) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

		fd_to = open(argv[2], O_WRONLY | O_APPEND);
		bytes = read(fd_from, buffer, BUFFER_SIZE);

	} while (bytes > 0);

	free(buffer);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
