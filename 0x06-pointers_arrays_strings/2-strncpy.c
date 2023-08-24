#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * *_strncpy - copies a string.
  * @dest: a string.
  * @src: a string.
  * @n: an integer.
  * Return: a character.
  */
char *_strncpy(char *dest, char *src, int n)
{
	if (n == 5)
	{
		strncpy(dest, src, n);
		return (dest);
	}
	else
	{
		strncpy(dest, src, n);
		return (dest);
	}
}
