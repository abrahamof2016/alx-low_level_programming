#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * *_strncat - concatenate a string.
  * @dest: a string.
  * @src: a string.
  * @n: an integer.
  * Return: a character.
  */
char *_strncat(char *dest, char *src, int n)
{
	if (n == 1)
	{
		strncat(dest, src, n);
		return (dest);
	}
	else
	{
		strncat(dest, src, n);
		return (dest);
	}
}
