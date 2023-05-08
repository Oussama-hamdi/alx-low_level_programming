#include "main.h"
#include <fcntl.h>

/**
 * create_file - Creates a file
 * @filename: Filename
 * @text_content: Text to write into the file
 * Return: 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;

		w = write(fd, text_content, len);
		if (w != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
