#include "main.h"
/**
  * read_textfile - reads a text file
  * and prints it to the POSIX standard output.
  * @filename: a text file to be read.
  * @letters: number of characters to be read and printed.
  * Return: number of characters printed upon success.
  * 0 upon fialure.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz;
	char *buffer = malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd < 0)
	{
		return (0);
	}
	sz = read(fd, buffer, letters);
	_putchar(sz);
	printf("%s", buffer);
	return (sz);
}

