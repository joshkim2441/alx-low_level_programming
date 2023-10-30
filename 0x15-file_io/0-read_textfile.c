#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard ouput
 * @filename: the file to be read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * 0 if file cannot be opened or read, if filename is NULL, if write fails
 * or does not write expected amount of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t write_count, read_count;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_count = read(fd, buffer, letters);
	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (write_count);
}
