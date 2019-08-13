#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - function to create a file from script
 * @filename: filename to create
 * @text_content: pointer to text to put in file
 * Return: 1 on succes or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0, lenw = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[len] != '\0'; len++)
		{
		}
		lenw = write(fd, text_content, len);
		if (lenw == -1)
			return (-1);
	}
	close(fd);
	return (1);

}
