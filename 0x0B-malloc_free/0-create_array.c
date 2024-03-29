#include <stdlib.h>
#include "main.h"
/**
 * create_array - allocate memory
 * @size: size of memory
 * @c: values
 * Return: memory address
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
		return (NULL);
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
