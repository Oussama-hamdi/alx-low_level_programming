#include "main.h"
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Filename to append the text to
 * @text_content: Text to be appended
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (1);

	if (text_content)
	{
		len = 0;
		while (text_content[len] != '\0')
			++len;

		res = write(fd, text_content, len);
		if (res == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
