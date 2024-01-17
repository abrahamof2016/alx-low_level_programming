#include <stdlib.h>
/**
 * create_array - creates and initializes an array of char
 * @size: size of memory
 * @c: value stored
 * Return: memory address upon success
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *buffer;

    buffer = malloc(sizeof(char) * 98);
    for (i = 0; i < size; i++)
    {
        buffer[i] = c;
    }
    return (buffer);
}
