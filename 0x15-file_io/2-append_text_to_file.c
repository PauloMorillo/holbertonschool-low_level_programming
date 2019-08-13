#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - function to text to a existent textfile
 * @filename: textfilename to append text
 * @text_content: text to append in textfile
 * Return: 1 on success or -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0, lenw = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	for (; text_content[len] != '\0'; len++)
	{
	}
	lenw = write(fd, text_content, len);
	if (lenw == -1)
		return (-1);
	close(fd);
	return (1);
}
