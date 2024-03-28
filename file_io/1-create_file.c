#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 on succerss, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;

	if (filename == NULL) /** if filename is NULL */
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_count = write(fd, text_content, strlen(text_content));
		if (write_count == -1)
		{
			close(fd);
			return (-1);
		}
	}
	return (1);
}
