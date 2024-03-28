#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if the file exist and -1 if doesn't exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write_count = write(fd, text_content, strlen(text_content));
		if (write_count == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
