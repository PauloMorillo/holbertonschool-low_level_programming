#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - function to read a textfile and print
 * @filename: textfilename to print
 * @letters: many letters has the textfile
 * Return: Numbers of letters or 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd;
	int len = 0, lenw = 0;

	if (filename == NULL)
		return (0);
	if (letters > 0)
	{
		buff = malloc(letters);
		if (buff == NULL)
			return (0);
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);
		len = read(fd, buff, letters);
		if (len == -1)
			return (0);
		lenw = write(STDOUT_FILENO, buff, len);
		if (lenw == -1)
			return (0);
		close(fd);
		return (len);
	}
	return (0);
}
