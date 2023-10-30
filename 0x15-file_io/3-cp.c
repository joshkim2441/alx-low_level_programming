#include "main.h"

/**
 * exit_file - closes the file
 * @file_from: the source file to be copied from
 * @file_to: the destination file
 * @argv: the array elements
 */

void exit_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copies the buffer contents
 * @argc: number of arguments
 * @argv: array of elements
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_file;
	ssize_t size, bytes;
	char buffr[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	exit_file(file_from, file_to, argv);

	size = 1024;
	while (size == 1024)
	{
		size = read(file_from, buffr, 1024);
		if (size == -1)
			exit_file(-1, 0, argv);
		bytes = write(file_to, buffr, size);
		if (bytes == -1)
			exit_file(0, -1, argv);
	}

	close_file = close(file_from);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	close_file = close(file_to);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
