#include <stdio.h>
#include "main.h"
#include <string.h>
/**
  * _memset - prints a hex num.
  * @s: a hex to be printed.
  * @n: size to be printed.
  * @b: equivalent hes to be printed.
  * Return: a character.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
