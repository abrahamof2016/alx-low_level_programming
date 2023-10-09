#include "main.h"
/**
  * read_textfile - reads a text file
  * and prints it to the POSIX standard output.
  * @filename: a text file to be read.
  * @letters: number of characters to be read and printed.
  * Return: number of characters printed upon success.
  * 0 if filename is NULL.
  * 0 if write failes or does not return expected number of bytes.
  * 0 if file name cannot be opened or read.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t i;
	int bytes_read, fd;
	char *buffer = malloc(letters * sizeof(char));

	if (!filename)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd < 0)
	{
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	for (i = 0; i < strlen(buffer); i++)
	{
		_putchar(buffer[i]);
	}

	_putchar(bytes_read);
	close(fd);
	free(buffer);
	return (bytes_read);
}

