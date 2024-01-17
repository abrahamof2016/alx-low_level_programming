#include <stdlib.h>
/**
 *create_array - creates and initializes an array of char
 *@size: size of memory
 *@c: value stored
 *Return: memory address upon success
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i;
    char *buffer;

    if (size == 0)
        return (NULL);
    buffer = malloc(sizeof(char) * 98);
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
