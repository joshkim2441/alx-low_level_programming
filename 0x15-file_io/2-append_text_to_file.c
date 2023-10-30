#include "main.h"

/**
 * append_text - adds text to the end of a file
 * @filename: the file to be written to
 * @text_content: the NULL terminated string to add to the end of the file
 * Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_RDWR | O_APPEND);

	if (filename == NULL)
	{
		return (-1);
	}
	if (fd == -1)
	{
		return (-1);
	}
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
