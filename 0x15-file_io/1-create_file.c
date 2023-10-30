#include "main.h"

/**
 * create_file - function that creates a new file
 * @filename: the name of the file to be created
 * @text_content: a null-terminated string to write to the file
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filename == NULL)
		return (-1);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		ssize_t write_status = write(fd, text_content, strlen(text_content));
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}