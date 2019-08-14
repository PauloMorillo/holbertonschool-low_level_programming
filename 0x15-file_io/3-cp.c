#include "holberton.h"
#include <stdio.h>
/**
 * main - program to copies the content from file to another
 * @argc: length of arguments
 * @argv: array with arguments
 * Return: Numbers of letters or 0 if it fails
 */
int main(int argc, char *argv[])
{
	char buff[1024];
	int fd, len = 0, lenw = 0, clo = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	len = read(fd, buff, 1024);
	if (len == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	clo = close(fd);
	if (clo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
	fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	lenw = write(fd, buff, len);
	clo = close(fd);
	if (clo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
	return (0);
}
