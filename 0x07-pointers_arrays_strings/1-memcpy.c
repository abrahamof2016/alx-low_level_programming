#include "main.h"
/**
  * _memcpy - copies memory area.
  * @dest: a string.
  * @src: a string.
  * @n: an integer.
  * Return: a character.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i]  = src[i];
		i++;
	}
	return (dest);
}
